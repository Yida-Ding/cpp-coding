import os

def create_folder(folder,Nfile):
    if not os.path.exists(folder):
        os.makedirs(folder)
    else:
        return

    for i in range(1,Nfile+1):
        filename=folder+'_Task%d'%i
        with open("%s/%s.cpp"%(folder,filename),'w') as cfile:
            cfile.close() 

def add_files(folder,head,idx1,idx2):
    for i in range(idx1,idx2+1):
        filename=head+'_Task%d'%i
        with open("%s/%s.cpp"%(folder,filename),'w') as cfile:
            cfile.close() 

if __name__=="__main__":
    # create_folder("Ch6",10)
    add_files("Ch6_Pointers","Ch6",23,28)









