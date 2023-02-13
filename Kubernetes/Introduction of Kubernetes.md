# Introduction of Kubernetes
## Kubernetes:
It is a container management system developed on the Google platform. Kubernetes helps to manage containerised applications in various types of physical, virtual, and cloud environments. Google Kubernetes is a highly flexible container tool to consistently deliver complex applications running on clusters of hundreds to thousands of individual servers.
## Features of Kubernetes
Following are the essential features of Kubernetes:
1.	Pod: It is a deployment unit in Kubernetes with a single Internet protocol address.
2.	Horizontal Scaling: It is an important feature in the Kubernetes. This feature uses a HorizontalPodAutoscalar to automatically increase or decrease the number of pods in a deployment, replication controller, replica set, or stateful set on the basis of observed CPU utilization.
3.	Automatic Bin Packing: Kubernetes helps the user to declare the maximum and minimum resources of computers for their containers.
4.	Service Discovery and load balancing: Kubernetes assigns the IP addresses and a Name of DNS for a set of containers, and also balances the load across them.
5.	Automated rollouts and rollbacks: Using the rollouts, Kubernetes distributes the changes and updates to an application or its configuration. If any problem occurs in the system, then this technique rollbacks those changes for you immediately.
6.	Persistent Storage: Kubernetes provides an essential feature called 'persistent storage' for storing the data, which cannot be lost after the pod is killed or rescheduled. Kubernetes supports various storage systems for storing the data, such as Google Compute Engine's Persistent Disks (GCE PD) or Amazon Elastic Block Storage (EBS). It also provides the distributed file systems: NFS or GFS.
7.	Self-Healing: This feature plays an important role in the concept of Kubernetes. Those containers which are failed during the execution process, Kubernetes restarts them automatically. And, those containers which do not reply to the user-defined health check, it stops them from working automatically.

## Kubernetes Basics
Now in this Kubernetes tutorial, we will learn some important Basics of Kubernetes:

# Cluster:
It is a collection of hosts(servers) that helps you to aggregate their available resources. That includes ram, CPU, ram, disk, and their devices into a usable pool.

# Master:
The master is a collection of components which make up the control panel of Kubernetes. These components are used for all cluster decisions. It includes both scheduling and responding to cluster events.

# Node:
It is a single host which is capable of running on a physical or virtual machine. A node should run both kube-proxy, minikube, and kubelet which are considered as a part of the cluster.

# Namespace:
It is a logical cluster or environment. It is a widely used method which is used for scoping access or dividing a cluster.


## Kubernetes Architecture Diagram
 
 ![image](https://user-images.githubusercontent.com/103322378/215279994-0577da83-019e-461c-bf28-2d12d40c5ca4.png)
 
1) In the AWS Kubernetes architecture diagram above you can see, there is one or more master and multiple nodes. One or masters used to provide high-availability.
2) The Master node communicates with Worker nodes using Kube API-server to kubelet communication.
3) In the Worker node, there can be one or more pods and pods can contain one or more containers.
4) Containers can be deployed using the image also can be deployed externally by the user.

## Kubernetes Architecture Components

 ![image](https://user-images.githubusercontent.com/103322378/215280013-db07e470-ab0d-46cc-9a7e-b0d0955f811e.png)

 
Kubernetes Master Node
Master Node is a collection of components like Storage, Controller, Scheduler, API-server that makes up the control plan of the Kubernetes. When you interact with Kubernetes by using CLI you are communicating with the  Kubernetes cluster’s master node. All the processes run on a single node in the cluster, and this node is also referred to as the master.

# Master Node Components:
1) Kube API-server performs all the administrative tasks on the master node. A user sends the rest commands as YAML/JSON format to the API server, then it processes and executes them. The Kube API-server is the front end of the Kubernetes control plane.
2) etcd is a distributed key-value store that is used to store the cluster state. Kubernetes stores the file in a database called the etcd. Besides storing the cluster state, etcd is also used to store the configuration details such as the subnets and the config maps.
3) Kube-scheduler is used to schedule the work to different worker nodes. It also manages the new requests coming from the API Server and assigns them to healthy nodes.
4) Kube Controller Manager  task is to obtain the desired state from the API Server. If the desired state does not meet the current state of the object, then the corrective steps are taken by the control loop to bring the current state the same as the desired state.
There are different types of control manager in Kubernetes architecture:
•	Node Manager, it manages the nodes. It creates new nodes if any node is unavailable or destroyed.
•	Replication Controller, it manages if the desired number of containers is running in the replication group.
•	Endpoints controller, it populates the endpoints object that is, joins Services & Pods.
Kubernetes Worker Node
The worker nodes in a cluster are the machines or physical servers that run your applications. The Kubernetes master controls each node. there are multiple nodes connected to the master node. On the node, there are multiple pods running and there are multiple containers running in pods.
# Worker Node Components
1) Kubelet is an agent that runs on each worker node and communicates with the master node. It also makes sure that the containers which are part of the pods are always healthy. It watches for tasks sent from the API Server, executes the task like deploy or destroy the container, and then reports back to the Master.
2) Kube-proxy is used to communicate between the multiple worker nodes. It maintains network rules on nodes and also make sure there are necessary rules define on the worker node so the container can communicate to each in different nodes.
3) Kubernetes pod is a group of one or more containers that are deployed together on the same host. Pod is deployed with a shared storage/network, and a specification for how to run the containers. Containers can easily communicate with other containers in the same pod as though they were on the same machine.
4) Container Runtime is the software that is responsible for running containers. Kubernetes supports several container runtimes: Docker, containers.

In Kubernetes architecture, both the master node and worker nodes are managed by the user. But in Managed Kubernetes service third-party providers manages Master node & user manages Worker node also manage Kubernetes offers dedicated support, hosting with pre-configured environments. Managed solutions take care of much of this configuration for you.


## Advantages of Kubernetes
•	Easy organization of service with pods

•	It is developed by Google, who bring years of valuable industry experience to the table

•	Largest community among container orchestration tools

•	Offers a variety of storage options, including on-premises, SANs and public clouds

•	Adheres to the principals of immutable infrastructure

•	Kubernetes can run on-premises bare metal, OpenStack, public clouds Google, Azure, AWS, etc.

•	Helps you to avoid vendor lock issues as it can use any vendor-specific APIs or services except where Kubernetes provides an abstraction, e.g., load balancer and storage.

•	Containerization using kubernetes allows package software to serve these goals. It will enable applications that need to be released and updated without any downtime.

•	Kubernetes allows you to assure those containerized applications run where and when you want and helps you to find resources and tools which you want to work.

## Disadvantages of Kubernetes
•	Kubenetes dashboard not as useful as it should be

•	Kubernetes is a little bit complicated and unnecessary in environments where all development is done locally.

•	Security is not very effective.

