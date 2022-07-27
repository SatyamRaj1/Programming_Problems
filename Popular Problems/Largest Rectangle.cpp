long largestRectangle(vector<int> h) {
    long area=0;
    for(int i=0;i<h.size();i++){
        int hei=INT_MAX;
        for(int j=i;j<h.size();j++){
            if(h[j]<hei)
                hei=h[j];
            long ar=(j-i+1)*hei;
            if(ar>area){
                area=ar;
            }
            if(hei*(h.size()-i)<area)
                break;
        }
    }
    return area;
}

