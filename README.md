# LOAM-SERIES EVALUATION
In this final project, we systematically examined
and compared various algorithms within the LOAM series,
specifically ALOAM, LEGO-LOAM, and SC-LEGO-LOAM. Our
primary focus was on meticulously analyzing the developmental
trajectory from a singular lidar odometry approach (the original
LOAM) to the comprehensive SLAM systems, namely Lego-
LOAM and SC-LEGO-LOAM. This comprehensive analysis
involved intricate comparisons between algorithms, elucidation
of improvements made, and in-depth assessments. Ultimately,
we conducted thorough testing and comparison of these three
algorithms on two extensive long-distance datasets

**Contributers:** *Zhexin Xu, Rahil Bhowal*

### DATASETS USED
We have used the [MulRan Dataset for Urban Place Recognition](https://sites.google.com/view/mulran-pr/dataset). We have particularly focused on KAIST 01 and Riverside 03 dataset.

### RESULTS AND DISCUSSION
![RIVERSIDE03](https://github.com/rahil-bhowal007/LOAM-SERIES/assets/65888130/29b68ae0-8bc3-4e0c-ba96-7ac997c3e8a0)
<p align="center">
<it> Fig 1. Point Cloud Comparison on RIVERSIDE 03 Dataset </it>
</p>

![KAIST 01 ](https://github.com/rahil-bhowal007/LOAM-SERIES/assets/65888130/85627c42-4458-417a-80fc-0358b5816f09)
<p align="center">
<it>Fig 2. Point Cloud Comparison on KAIST 01 Dataset</it>
</p>
The mapping results of three algorithms on the Kaist dataset
are illustrated in Figure 1 and Figure 2.
<br/>
<p align="center">
<table>
   <tr>
    <th></th>
    <th>max</th>
     <th>mean</th>
     <th>median</th>
     <th>mean</th>
     <th>rmse</th>
  </tr>
  <tr>
    <td>SC-LeGO-LOAM</td>
    <td>1.60%</td>
    <td>0.84%</td>
    <td>0.82%</td>
    <td>0.08%</td>
    <td>0.9%</td>
   </tr>
  <tr>
  <td>LeGO-LOAM</td>
  <td>2.55%</td>
  <td>1.03%</td>
  <td>1.01%</td>
  <td>1.35%</td>
  <td>1.13%</td>  
  </tr>
</table>
</p>
<p align="center">
<b>TABLE I: ATE of LeGO-LOAM and SC-LeGO-LOAM in
Kaist sequence 01</b>
</p>
<br/>
<p align="center">
<table>
   <tr>
    <th></th>
    <th>max</th>
     <th>mean</th>
     <th>median</th>
     <th>mean</th>
     <th>rmse</th>
  </tr>
  <tr>
    <td>SC-LeGO-LOAM</td>
    <td>2.89%</td>
    <td>1.35%</td>
    <td>1.36%</td>
    <td>0.20%</td>
    <td>1.46%</td>
   </tr>
  <tr>
  <td>LeGO-LOAM</td>
  <td>8.55%</td>
  <td>2.82%</td>
  <td>3.34%</td>
  <td>0.27%</td>
  <td>3.34%</td>  
  </tr>
</table>
</p>
<p align="center">
<b>TABLE II: ATE of LeGO-LOAM and SC-LeGO-LOAM in
Riverside sequence 03</b>
</p>
<br/>
Furthermore, owing to enhanced
loop closure constraints, the mapping results of SC-LeGO-
LOAM surpass those of LeGO-LOAM. Table 1 and Table 2 provides a comparative analysis of the absolute translation
error (ATE). Ground truth data, derived from high-precision
RTK, was employed for evaluation. The results reveal that
on a long-distance SLAM dataset, SC-LeGO-LOAM exhibits
notably superior localization accuracy compared to LeGO-
LOAM.

### REFERENCES
[1] J. Zhang and S. Singh, “Loam: Lidar odometry and mapping in real-
time.” in Robotics: Science and systems, vol. 2, no. 9. Berkeley, CA,
2014, pp. 1–9.
<BR/>
[2] T. Shan and B. Englot, “Lego-loam: Lightweight and ground-optimized
lidar odometry and mapping on variable terrain,” in IEEE/RSJ Interna-
tional Conference on Intelligent Robots and Systems (IROS). IEEE,
2018, pp. 4758–4765.<BR/>
[3] G. Kim and A. Kim, “Scan context: Egocentric spatial descriptor for place
recognition within 3d point cloud map,” in 2018 IEEE/RSJ International
Conference on Intelligent Robots and Systems (IROS). IEEE, 2018, pp.
4802–4809.<BR/>
[4] M. Kaess, H. Johannsson, R. Roberts, V. Ila, J. J. Leonard, and F. Dellaert,
“isam2: Incremental smoothing and mapping using the bayes tree,” The
International Journal of Robotics Research, vol. 31, no. 2, pp. 216–235,
2012.<bR/>
[5] G. Kim, Y. S. Park, Y. Cho, J. Jeong, and A. Kim, “Mulran: Multimodal
range dataset for urban place recognition,” in Proceedings of the IEEE
International Conference on Robotics and Automation (ICRA), Paris, May
2020.














