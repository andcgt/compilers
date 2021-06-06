import os
import time
for x in os.listdir("/home/andcgt/桌面/functional_test/"):
	if (x.split('.'))[-1]=="sy":
		t=x.split('.')
		os.system("./compiler </home/andcgt/桌面/functional_test/"+x+' >./eeyore/'+t[0]+'.eeyore')
		if os.path.exists("/home/andcgt/桌面/functional_test/"+t[0]+".in"):
			os.system('/home/andcgt/桌面/MiniVM/build/minivm ./eeyore/'+t[0]+'.eeyore </home/andcgt/桌面/functional_test/'+t[0]+".in\necho $?\n")
		else:
			os.system('/home/andcgt/桌面/MiniVM/build/minivm ./eeyore/'+t[0]+'.eeyore\necho $?\n')
		print(x)
		print(".........\n")
		os.system("cat /home/andcgt/桌面/functional_test/"+t[0]+".out\n")
		print(".........\n")
		print(".........\n")
