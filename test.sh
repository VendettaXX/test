#!/bin/bash 
exit_script()
{
    exit 1
}


echo "before exit"
exit_script
echo "after exit"
