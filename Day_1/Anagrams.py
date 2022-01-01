#User function Template for python3

class Solution:
    def Anagrams(self, words, n):
        '''
        words: list of word
        n:      no of words
        return : list of group of anagram {list will be sorted in driver code (not word in grp)}
        '''
        
        #code here
        Dict = {}         
       
        for x in range(0,n):
            
            word = ''.join(sorted(words[x]))
            if (bool(Dict)) and (word in Dict.keys()):
                Dict[word].append(words[x])
            else:
                Dict[word] = []
                Dict[word].append(words[x])
            
        ans = []    
        for x in Dict:
            ans.append(Dict[x])
        
        
                    
                    
    

        return ans


#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n= int(input())
        words=input().split()
        
        ob = Solution()
        ans = ob.Anagrams(words,n)
        
        for grp in sorted(ans):
            for word in grp:
                print(word,end=' ')
            print()

# } Driver Code Ends