#!/usr/bin/sh

id --groups --name $FT_USER | sed "s/ /,/g" | tr -d '\n' 
