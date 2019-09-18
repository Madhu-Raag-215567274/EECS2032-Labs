#!/bin/bash
x='quota -u root -vsw | grep:/'
u='echo $x | cut -d''-f2'
q='echo $x | cut -d''-f3'
echo "you used $u of $q"
