clear
cat > db.txt
echo  "Student_Name \t Department"
cut -d ',' -f 2,3 db.txt
echo "No. of Students Department"
cut -d ',' -f 3 db.text | sort | uniq -c
