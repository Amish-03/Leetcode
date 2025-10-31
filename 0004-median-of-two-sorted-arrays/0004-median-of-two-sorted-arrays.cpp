class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2=nums2.size();
        
        if(n1==0)
        {
            if(n2%2)
            {
                int mid=n2/2;
                return (double)nums2[mid];
            }
            else
            {
                int mid=n2/2;
                double temp1=nums2[mid];
                double temp2=nums2[mid-1];
                return (temp1+temp2)/2;
            }
        }

        if(n2==0)
        {
            if(n1%2)
            {
                int mid=n1/2;
                return (double)nums1[mid];
            }
            else
            {
                int mid=n1/2;
                double temp1=nums1[mid];
                double temp2=nums1[mid-1];
                return (temp1+temp2)/2;
            }
        }

        int flag=0;
        vector<double> merge;
        int i=0,j=0;

        while((n1!=0 && n2!=0) && (i<n1 || j<n2))
        {
            if(flag==0)
            {
            merge.push_back((nums1[i]<nums2[j])?nums1[i]:nums2[j]);
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
                j++;

            if(i>=n1)
                flag=1;
            else if(j>=n2)
                flag=-1;

            }

            else if(flag==1)
            {
                while(j<n2)
                {
                    merge.push_back(nums2[j]);
                    j++;
                }
            }
            else if(flag==-1)
            {
                while(i<n1)
                {
                    merge.push_back(nums1[i]);
                    i++;
                }
            }
            
        }

        if((n1+n2)%2)
        {
            int mid=(n1+n2)/2;
            return merge[mid];
        }
        else
        {
            int mid=(n1+n2)/2;
            return (merge[mid]+merge[mid-1])/2;
        }
    }
};