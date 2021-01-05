



class PageRankVertex : public Vertex<Double, Void, Double>
    public  void Compute(MessageIterator msgs) {
        if (superstep() >= 1) {
            double sum = 0;
            for (Message msg : msgs) {
                sum += msg.getValue();
            }
            this.value = 0.15 / getNumOfVertices() + 0.85 * sum;
        }
​
     if (superstep() < 30) {
         int outSize = getOutEdgerIterator().getSize();
         sendMessageToAllNeighbors(this.value / n);
     } else {
         voteToHalt();
     }
}