ldapsearch -Q '(uid=z*)' | grep -i 'cn: z' | sort -r | sed 's/cn: //'
