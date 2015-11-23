import sys
import operator

File=open(sys.argv[1])

print "//This file has been automatically generated by "+sys.argv[0]
print
print "#ifndef _KEY_DEFS_H_"
print "#define _KEY_DEFS_H_"
print 
print "#include \"pipe.h\""
print "#include \"../typedef.h\""

key_type={}
key_id={}
out=[]
File.readline()
for line in File:
	line=line.strip('\n').split('\t')
	name=line[0].lower() 
	number=line[1]
	this_key_type=line[2].lower()
	key_id[name]=int(number)
	if this_key_type not in (key_type.keys() ):
		key_type[this_key_type]=len(key_type.keys())
	desc=''.join(line[3:])
	out.append("static key "+name+"_k={key_id::"+name+", key_type::"+this_key_type+", \""+name+"\", \""+desc+"\"};")
print
print "class key_type"
print "{"
print "public:"
print "\tstatic constexpr key_t"
sorted_type = sorted(key_type.items(), key=operator.itemgetter(1))
for this_key_type in sorted_type[0:-1]:
	print "\t"+this_key_type[0]+"="+str(this_key_type[1])+","
this_key_type=sorted_type[-1]
print "\t"+this_key_type[0]+"="+str(this_key_type[1])+";"
print "};"
print
print "class key_id"
print "{"
print "public:"
print "\tstatic constexpr key_t"
sorted_id = sorted(key_id.items(), key=operator.itemgetter(1))
for this_key_id in sorted_id[0:-1]:
	print "\t"+this_key_id[0]+"="+str(this_key_id[1])+","
this_key_id=sorted_id[-1]
print "\t"+this_key_id[0]+"="+str(this_key_id[1])+";"
print "};"
print
for line in out:
	print line
print
print "#endif" 