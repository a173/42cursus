#!/bin/bash

db_name='wp_base'
username='root'
hostname='localhost'

# WordPress database
service mysql start
mysql -e "CREATE DATABASE $db_name;"
mysql -e "GRANT ALL PRIVILEGES ON $db_name.* TO '$username'@'$hostname' WITH GRANT OPTION;"
mysql -e "UPDATE mysql.user SET plugin='mysql_native_password' WHERE user='$username';"
mysql -e "FLUSH PRIVILEGES;"

