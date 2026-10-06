Prompt:
How to fix conflict merge and give me a command git for commit, init and push.
____________________________
AI helped us with:
```
# pastikan ada di repository
cd Doubly-Linked-List-Mini-Lab

# pindah ke branch temanmu
git checkout Fadhil

# ambil update terbaru
git fetch origin

# masukkan main terbaru ke branch Fadhil
git merge origin/main
```


```
git add src/main.cpp
git commit -m "fix: resolve merge conflict with main"
git push origin Fadhil
```


____________________________
What we changed/tested:
Now we fixed the error about conflict merge.
____________________________