#!/bin/bash - 
#===============================================================================
#
#          FILE:  run.sh
# 
#         USAGE:  ./run.sh 
# 
#   DESCRIPTION:  
# 
#       OPTIONS:  ---
#  REQUIREMENTS:  ---
#          BUGS:  ---
#         NOTES:  ---
#        AUTHOR: YOUR NAME (), 
#       COMPANY: 
#       CREATED: 2015年06月04日 11时03分33秒 CST
#      REVISION:  ---
#===============================================================================

cd ../ && scons
if [ $? -ne 0 ]
then
    echo "Compile or Link Failed"
    exit
fi;
cd job/ && scons

