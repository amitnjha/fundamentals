#/bin/bash

ls -1 *.c | awk ' tgt = substr($0,1,index($0,".")-1) ".bin" {all = all " " tgt}  END {print "all : " substr(all,2) "\n\techo \"Build Done\" \nclean:\n\trm *.bin" }{print tgt " : " $0 "\n\tgcc " $0 " -o " tgt}' > makefile

make all

