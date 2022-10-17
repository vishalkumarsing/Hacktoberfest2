package implementation;
public class MyBinarySearchTree<E extends Comparable<E>> {
    private Node<E> root;

    public Node<E> getRoot() {
        return root;
    }
    public void insert(E element){
        Node<E> node = new Node<>();
        if(isEmpty()){
            root = node;
        }
        else{
            //traverse and reach the
            //...
            Node<E> temp = root;
            Node<E> parent = null;
            while (temp != null){
                parent = null;
                if(element.compareTo(temp.getData()) <= 0){
                    //update temp to refer left sub tree
                    temp = temp.getLeft();
                }
                else{
                    //
                    temp = temp.getRight();
                }
            }
            //checking weather new node will be left or right
            //child of parent
            if(element.compareTo(parent.getData()) <= 0){
                //set new node to left child of parent
                parent.setLeft(node);

            }
            else{
                parent.setRight(node);
            }
        }
    }


    private boolean isEmpty(){
        if(root == null){
            return true;
        }
        return false;

    }
    //traversal
    public void inOrder(Node<E> Node){
        if(Node != null;){
            //processs
            inOrder(node.getLeft());
            //
            System.out.print(node.getData() + ".");
            inOrder(node.getRight());

        }
        public boolean search(E searchElement){
            boolean response = false;
            //
            Node<E> temp = root;
            while (temp != null){
                if(searchElement.compareTo(temp.getData()) == 0){
                    response = terue;
                    break;

                }
                else if(searchElement.compareTo(temp.getData()) <0){
                    temp = temp.getLeft();
                }
                else{
                    temp = temp.getRight();
                }
            }
            return response;
        }
    }
    //delete
    public void delete(E deletingElement){
        //search for deleating node and keep track of parent
        Node<E> temp = root;
        Node<E> parent = null;
        while (temp != null){
            parent = temp;
            if(deletingElement.compareTo(temp.getData()) == 0){
                break;
            }
            else{
                parent = temp;
                if(deletingElement.compareTo(temp.getData())< 0){
                    temp = temp.getLeft();
                }
                else{
                    temp = temp.getRight();

                }
            }
        }
        if(temp != null){
            //case 1
            if(isLeaf(temp)){
                //root node
                if(parent == null){
                    root = null;
                }
                else{
                    if(deletingElement.compareTo(parent.getData()) < 0){
                        parent.setLeft(null);

                    }
                    else{
                        parent.setRight(null);
                    }
                }



            }
            //case 2
                //left child
            else if(hasLeftChild(temp)){
                //root node
                if(parent == null){
                    root = root.getLeft();
                }
                else{
                    if(deletingElement.compareTo(parent.getData()) < 0){
                        parent.setLeft(temp.getLeft());
                    }
                    else{
                        parent.setRight(temp.getLeft());
                    }


                    }
                }
            //right child
            else if(!hasLeftChild(temp)){
                //root case
                if(parent == null){
                    root = root.getRight();

                }
                else{
                    if(deletingElement.compareTo (parent.getData() <0){}
                }
            }
            //case 3
                //root node

        }
        else{
            System.out.println("cann't delete");
        }
    }

    private boolean hasLeftChild(Node<E> temp) {
        if(temp.getLeft() != null && temp.getRight() == null){
            return true;

        }
        return false;
    }

    private boolean isLeaf(Node<E> temp) {
        if(temp.getLeft() == null && temp.getRight() == null){
            return true;
        }
        return false;
    }
}
