#include <sstream>
#include <gtest/gtest.h>
//#define BOOST_TEST_MODULE test_version
//#include <boost/test/unit_test.hpp>

#include "homework.hpp"

constexpr auto input_text = 
R"(113.162.145.156	111	0
157.39.22.224	5	6
79.180.73.190	2	1
179.210.145.4	22	0
219.102.120.135	486	0
67.232.81.208	1	0
85.254.10.197	0	7
23.240.215.189	6	0
1.29.168.152	17	0
185.69.186.168	1	3
110.152.103.161	0	1
185.182.81.131	1	1
68.45.152.8	2	0
114.221.179.117	0	1
185.89.100.249	752	0
46.70.113.73	1	0
188.68.0.38	1	0
119.42.115.97	11	0
194.106.108.214	0	3
24.210.239.177	1	0
166.88.193.116	9	0
62.205.202.214	0	2
188.166.87.191	0	50
103.62.147.2	1	6
95.181.177.197	1	0
95.181.177.197	1	0
149.107.0.27	3	0
182.186.69.18	96	0
73.21.168.251	2	0
113.190.198.73	3	0
91.15.15.33	9	0
188.72.96.184	30	0
50.254.198.161	2	0
98.219.109.151	1	1
123.133.114.213	2	0
89.177.68.136	0	1
89.177.68.136	0	1
65.208.151.112	1	0
183.198.27.25	16	100
187.189.75.118	42	0
188.212.33.157	6	0
94.240.192.2	0	6
69.160.110.157	1	0
81.198.169.232	5	2
185.89.100.47	34	0
46.182.19.219	920	960
183.88.197.193	11	0
49.74.228.23	3	136
124.224.214.76	1	0
107.185.11.105	1	0
41.235.16.95	1	0
68.37.186.197	1	0
188.72.127.199	117	1
173.171.247.113	2	0
173.171.247.113	2	0
49.35.12.51	0	1
67.167.96.234	0	1
204.11.243.70	59	0
182.58.201.28	0	2
168.167.95.164	3	0
153.151.156.27	3	0
79.110.28.59	112	0
37.188.189.227	2	0
188.69.198.152	0	2
98.196.145.69	2	0
68.202.216.62	1	0
68.202.216.62	1	0
68.202.216.62	1	0
5.189.203.79	30	0
197.42.2.124	0	2
95.10.3.43	72	0
180.251.148.71	1	0
113.144.6.220	6	0
89.236.227.204	0	1
67.250.31.212	1	0
67.250.31.212	1	0
177.66.186.82	2	0
107.209.121.224	2	0
213.103.211.108	0	2
27.49.172.153	0	3
78.158.5.183	0	1
78.158.5.183	0	1
27.109.142.224	0	4
103.101.109.70	0	4
117.241.3.153	2	4
86.146.190.166	1	0
68.60.148.11	1	0
89.146.70.220	0	1
171.5.117.72	25	0
66.169.196.128	0	4
5.8.47.226	278	0
165.255.112.201	24	0
207.191.252.36	294	0
123.231.108.232	124	0
185.146.112.69	1	3
187.190.255.160	0	1
187.190.255.160	0	1
191.209.77.60	152	0
58.126.159.88	1	0
222.42.146.225	2	0
193.78.85.148	0	1
66.102.6.107	1	1
5.189.202.254	121	0
188.72.126.149	48	0
185.217.68.210	1	0
190.62.36.205	0	1
190.62.36.205	0	1
114.243.13.43	47	0
128.199.42.73	10	5
5.188.216.44	122	0
74.124.159.77	1	0
103.74.19.104	5	1
183.182.99.139	26	0
188.72.126.153	74	0
173.211.75.241	1	0
163.172.151.47	358	19
180.183.42.174	1	0
93.237.52.162	0	1
60.127.180.251	2	0
84.132.45.217	0	2
37.9.45.225	9	0
82.67.92.27	3	0
123.191.149.173	21	0
73.90.162.151	1	0
178.200.214.178	0	3
70.123.153.26	1	0
177.81.192.15	6	0
47.29.8.38	0	2
123.21.121.123	6	0
73.11.30.103	1	0
73.11.30.103	1	0
112.79.133.183	1	0
151.251.24.30	0	3
47.217.153.6	2	0
47.208.114.106	1	0
93.179.90.113	20	0
149.107.0.31	27	0
188.166.66.232	3	4
64.89.99.122	17	0
116.18.33.248	1	0
211.226.114.169	3	0
69.76.232.100	1	0
69.76.232.100	1	0
69.76.232.100	1	0
69.76.232.100	1	0
193.70.91.227	5	0
191.101.165.168	39	0
195.205.28.27	7	0
177.81.184.55	5	0
24.163.91.199	5	0
197.48.69.176	1	0
45.127.57.74	57	0
14.169.83.98	12	0
47.11.217.253	0	2
222.173.235.246	1	0
172.2.146.147	1	0
67.183.246.205	2	0
218.185.237.250	5	0
74.136.5.194	8	0
14.187.212.140	11	0
149.3.43.228	0	1
141.101.132.191	63	0
189.216.159.43	2	0
5.8.47.84	83	0
50.26.133.146	2	0
83.221.180.18	0	4
117.213.109.57	0	1
109.193.71.64	0	1
46.70.147.26	1	0
188.166.49.134	3	2
117.198.224.130	0	1
77.179.162.181	0	2
27.251.253.58	2017	0
75.69.188.107	7	0
198.48.136.200	169	0
186.92.150.52	0	1
184.170.28.62	1	0
47.44.49.2	4	0
24.23.88.218	1	0
24.23.88.218	1	0
220.180.121.6	1	0
99.114.89.48	3	0
116.25.102.111	13	0
93.183.170.145	0	1
47.29.254.116	0	1
18.248.2.85	360	20
141.101.132.73	936	0
47.220.163.51	1	0
47.220.163.51	1	0
123.20.104.253	2	0
184.183.34.140	1	0
128.199.99.114	1	0
93.179.90.77	44	0
5.62.159.66	163	0
87.118.92.43	218	83
185.14.194.116	184	0
161.0.198.138	0	2
49.118.223.200	0	1
188.72.126.130	77	0
42.54.29.150	1	108
14.182.208.223	2	0
14.182.208.223	2	0
73.197.19.19	1	0
49.206.125.56	0	2
67.165.212.104	0	2
71.90.169.184	2	0
117.207.33.172	0	1
195.234.85.219	0	8
5.152.151.166	11	0
90.191.74.74	2	5
184.58.77.155	1	0
104.218.63.75	603	65
117.3.82.3	3	0
188.211.226.16	1495	0
107.175.234.130	33	0
85.253.112.79	0	4
190.213.37.222	1	3
70.234.198.76	2	0
70.234.198.76	2	0
5.188.216.204	136	0
69.251.6.155	2	0
93.34.197.129	0	2
5.8.47.202	77	0
14.162.206.233	6	0
1.231.69.33	1	0
69.23.42.183	3	0
63.87.226.66	1	0
5.254.65.190	0	3
37.33.109.179	0	2
1.1.234.8	0	1
119.201.4.165	1	0
179.218.84.120	13	0
5.101.217.139	322	0
96.92.198.213	1	0
96.92.198.213	1	0
117.248.24.152	0	1
85.253.148.39	0	2
27.70.17.38	5	0
211.225.89.44	1	0
184.91.78.121	1	0
95.181.176.189	209	0
178.6.12.226	1	0
131.221.56.20	3	0
84.108.11.149	0	6
164.126.188.157	1	1
107.223.148.60	1	0
218.7.166.58	19	0
177.42.212.125	94	0
191.101.54.77	2	0
191.101.54.77	2	0
94.30.173.135	0	18
92.105.136.141	0	1
41.159.26.123	884	0
24.191.211.63	3	1
202.74.243.112	92	0
108.73.108.163	1	0
67.188.13.100	1	0
123.20.181.120	4	0
179.211.81.134	30	0
64.40.152.168	1	0
68.43.142.235	3	0
173.211.75.62	2	0
50.81.221.73	7	0
103.203.133.202	46	0
47.74.157.18	1	0
84.252.26.213	0	1
84.252.26.213	0	1
71.234.84.132	1	0
186.125.174.10	3	0
113.182.239.185	300	0
106.67.36.120	0	1
189.100.88.211	2	0
184.170.35.121	1	0
181.215.20.38	2	0
185.3.147.64	82	22
187.64.27.167	19	0
73.55.95.93	1	0
45.32.140.209	148	0
37.110.213.11	0	1
177.32.68.231	2	0
203.192.225.115	1	18
189.181.251.184	0	1
82.199.206.151	112	0
73.224.202.251	2	0
75.90.211.217	1	0
173.211.75.55	2	0
115.221.10.154	3	0
190.39.83.68	1	0
112.124.39.77	17	0
5.189.200.175	69	0
181.169.25.33	84	0
202.166.194.217	8	0
108.18.251.109	1	0
188.72.127.216	46	0
76.94.181.14	1	0
141.196.77.153	0	4
69.227.160.129	2	0
5.101.221.37	82	0
59.42.27.180	98	0
188.68.0.207	225	0
173.24.113.249	1	0
173.24.113.249	1	0
14.231.56.112	5	0
5.62.159.140	54	0
141.101.132.179	21	0
95.90.191.205	0	2
193.93.192.122	34	0
75.65.190.40	3	0
91.204.190.7	0	3
131.129.231.39	0	1
186.86.29.56	701	0
91.135.176.211	4	0
154.160.1.180	3	0
83.143.86.155	1	0
60.7.107.169	21	0
89.249.207.229	40	0
95.181.176.155	4	0
95.181.176.155	4	0
41.199.158.154	2	0
36.5.146.30	15	0
217.72.94.100	0	1
217.72.94.100	0	1
217.72.94.100	0	1
217.72.94.100	0	1
217.72.94.100	0	1
14.231.214.53	11	0
89.163.155.202	33	15
85.187.105.45	0	1
77.13.117.195	0	1
70.91.13.106	1	0
126.241.3.145	1	0
114.249.117.72	3	0
113.173.67.60	1	0
183.87.196.93	0	7
49.203.248.26	1	0
49.203.248.26	1	0
185.89.100.59	11	0
95.181.177.241	3	0
125.43.69.142	0	5
37.186.67.25	5	0
185.46.85.204	8	0
73.91.213.154	1	0
111.61.78.76	15	0
75.114.69.42	18	0
95.181.177.50	191	0
95.90.254.195	1	0
109.192.168.38	2	22
5.101.217.48	1	0
86.34.133.118	6	0
46.101.163.119	3	3
189.6.128.228	12	0
202.9.43.222	1	0
202.142.76.12	0	1
105.73.25.26	1	0
119.184.218.145	23	0
179.219.241.71	2	0
156.212.169.72	1	0
103.66.196.13	3	0
68.41.149.247	1	0
117.102.78.2	3	0
14.186.245.237	8	0
93.179.90.24	206	0
39.88.253.245	17	138
187.3.66.189	2264	0
24.17.1.75	1	0
24.17.1.75	1	0
188.72.127.249	74	0
46.161.60.92	156	0
72.77.71.111	1	0
114.47.230.91	61	0
177.87.9.192	13	0
49.156.211.218	1	4
187.65.248.41	1	0
73.244.53.54	1	0
117.213.254.4	1	7
187.39.197.81	2	0
78.84.243.190	0	2
188.72.126.152	106	0
141.101.132.158	109	0
178.253.240.126	2	0
46.101.127.145	150	51
154.16.89.9	4	0
139.167.0.12	1	0
168.196.9.47	1	0
107.77.72.118	1	0
72.181.175.235	1	0
72.181.175.235	1	0
104.222.165.144	4	0
98.214.16.13	2	0
171.221.113.228	2	0
46.55.46.98	0	2
47.39.211.31	4	0
45.248.186.76	0	1
77.234.45.173	5	0
185.163.24.76	0	2
113.89.239.241	4	2
113.206.92.243	6	794
107.167.109.164	6	1
185.46.86.131	2	0
185.46.86.131	2	0
75.171.214.8	1	0
95.181.176.240	24	0
95.181.176.240	24	0
217.159.171.6	0	3
195.250.178.88	1	3
89.236.251.247	0	3
68.46.218.208	7	0
71.88.10.118	1	0
176.90.14.232	3	0
99.251.8.64	0	3
101.98.164.130	0	4
71.52.72.142	1	0
84.15.185.66	0	1
45.124.191.237	1	2
168.195.231.1	5464	0
73.141.213.207	2	0
78.171.131.126	2	0
73.166.52.138	0	1
73.166.52.138	0	1
103.203.241.89	2	2
188.68.0.102	156	0
108.30.39.3	0	1
108.30.39.3	0	1
191.207.27.171	1	0
123.116.254.111	7	0
113.77.173.249	3	0
81.151.71.218	0	6
191.191.197.98	32	0
188.166.49.134	15	4
108.180.26.133	0	2
108.180.26.133	0	2
45.62.234.109	3	0
177.43.57.48	20	0
95.181.176.136	123	0
117.196.197.139	1	3
23.240.217.243	1	3
70.180.91.246	2	0
159.203.13.174	5	0
186.46.222.194	0	6
141.101.132.93	128	0
186.179.100.193	1	0
181.215.16.39	2	0
114.95.157.203	321	0
189.7.220.132	10	0
189.251.241.73	0	7
172.97.129.82	1	0
64.237.226.172	3	0
50.32.39.122	1	0
37.201.203.88	0	1
170.80.252.30	37	0
89.170.3.145	1	0
156.204.84.209	31	0
78.84.60.71	0	1
78.84.60.71	0	1
78.84.60.71	0	1
78.10.207.6	0	2
99.169.226.169	1	0
99.169.226.169	1	0
99.169.226.169	1	0
99.169.226.169	1	0
73.104.80.103	1	0
73.104.80.103	1	0
79.206.209.45	0	1
103.220.209.173	0	1
66.249.92.198	6	0
47.16.77.236	0	2
89.38.96.66	7	0
75.206.129.73	1	0
129.56.12.56	30	0
5.8.47.44	961	0
193.24.92.54	0	4
156.222.243.190	1	0
176.228.138.151	0	1
176.228.138.151	0	1
176.228.138.151	0	1
181.122.209.200	3	0
35.193.144.59	803	0
101.24.171.210	32	50
188.68.0.185	34	0
113.195.165.235	5	0
41.242.141.134	2061	0
146.185.206.53	6	0
95.181.177.111	75	0
67.174.152.35	1	1
78.100.196.199	11	0
220.132.196.75	4	0
14.167.215.198	7	0
66.183.9.162	1	0
189.62.20.66	2	0
68.172.234.141	2	0
1.87.203.225	1	112
32.215.162.52	1	0
32.215.162.52	1	0
32.215.162.52	1	0
5.62.159.232	69	0
81.213.167.197	1	0
180.246.83.253	16	0
91.204.14.185	15	0
49.213.19.115	4	3
74.116.59.8	50	0
202.129.0.27	22470	0
94.141.76.33	0	1
37.110.210.153	0	1
125.165.131.226	1	0
61.74.152.228	1	0
61.74.152.228	1	0
217.174.230.98	0	2
173.225.247.123	2	0
77.68.40.185	0	1
182.75.81.122	2	0
182.75.81.122	2	0
79.184.219.107	11	0
97.95.65.151	1	0
49.213.19.137	5	6
118.114.86.199	1	0
175.192.51.84	18	0
97.82.75.243	1	0
72.79.56.37	27	0
117.2.125.26	13	0
193.194.132.76	0	2
119.15.93.202	3	0
119.15.93.202	3	0
119.15.93.202	3	0
107.174.108.194	12	0
103.207.242.56	1	24
78.109.65.21	0	7
171.77.145.44	0	1
45.123.220.122	2	0
5.189.202.198	4	0
88.91.160.177	1	6
149.154.167.161	1	0
109.75.90.41	1	4
188.97.225.180	0	1
76.112.220.160	2	0
5.101.221.76	104	0
114.125.118.9	2	0
188.237.136.152	1	3
213.225.6.88	0	2
14.187.178.209	1	0
46.251.197.23	1	0
189.121.253.246	78	0
109.127.20.122	0	2
118.96.117.80	31	0
27.97.226.94	0	1
96.94.121.25	2	0
5.8.47.202	34	0
46.161.56.203	6	0
193.136.199.50	1	0
121.27.48.172	6	0
36.67.5.186	1	0
89.28.76.171	50	0
46.161.56.174	92	0
188.2.221.111	4	1
85.253.176.102	0	1
79.15.208.108	4	0
5.62.154.58	51	0
85.114.239.251	0	10
46.161.56.106	3	0
46.161.56.106	3	0
67.5.105.174	1	0
181.215.0.59	5	0
95.181.176.58	653	0
72.193.106.165	1	0
217.61.224.38	1	0
185.89.100.44	102	0
188.72.126.41	40	0
46.70.225.39	0	3
80.133.65.104	0	1
82.196.6.103	4	0
185.158.116.188	11	0
94.30.155.174	0	1
5.101.219.107	12	0
197.48.89.171	1	0
164.132.3.102	2	0
79.100.201.157	11	0
47.11.7.112	0	1
82.32.174.146	1	0
189.217.133.144	0	1
146.185.177.103	919	76
217.25.18.126	0	1
5.62.154.52	39	0
187.188.129.136	1	0
217.82.152.217	1	0
106.51.30.215	0	1
68.106.156.3	2	0
109.185.152.20	0	7
45.247.3.119	2	1
108.171.129.171	0	2
189.102.186.9	4	0
189.175.155.108	3	0
103.28.36.56	3	0
212.56.210.90	0	1
204.232.108.181	1	1
85.180.234.65	0	1
188.166.49.33	13	0
188.166.72.33	2	1
156.220.35.15	8	0
41.227.84.129	3	0
188.68.0.30	120	0
176.12.58.180	13	0
85.118.110.10	0	11
162.247.72.217	56	15
67.205.174.171	1	0
185.89.217.170	1	1
176.241.89.82	3	0
123.23.148.249	4	0
123.23.148.249	4	0
183.147.179.187	2	0
111.222.25.83	0	1
91.204.14.239	96	0
60.174.233.154	4	0
157.37.38.188	0	2
50.80.193.175	1	0
37.221.176.236	1	0
118.69.205.201	20	0
113.173.98.95	4	0
5.146.199.53	0	1
213.213.103.190	60	0
141.101.132.120	73	0
171.221.26.73	30	0
188.68.0.171	116	0
151.53.178.221	0	2
146.185.204.136	111	0
117.209.246.210	0	1
193.40.12.10	0	2
77.215.105.50	2	24
122.40.163.51	18906	0
182.69.22.32	3	6
95.181.176.30	0	1
188.72.96.177	38	0
108.49.29.94	0	3
108.49.29.94	0	3
23.254.17.73	3	0
46.161.61.51	61	0
73.175.73.131	1	0
79.208.172.72	0	1
36.102.236.203	0	9
95.90.254.195	4	0
138.122.123.42	6	0
126.218.40.164	2	0
5.62.153.169	10	0
83.128.50.47	3	0
83.128.50.47	3	0
78.129.149.3	0	1
78.129.149.3	0	1
146.255.242.234	0	7
14.177.248.167	8	0
213.219.115.76	1	10
185.46.87.231	37	0
188.72.96.77	59	0
109.91.38.1	0	5
201.219.180.58	789	0
85.65.43.232	3	7
73.87.94.81	1	0
73.87.94.81	1	0
5.62.154.49	96	0
162.236.216.26	1	0
190.198.255.34	1	0
183.88.77.2	6	0
95.181.177.213	42	0
73.76.58.22	2	0
47.149.142.171	1	0
47.149.142.171	1	0
119.55.121.74	1	0
188.209.233.110	0	1
188.209.233.110	0	1
181.215.6.120	1	0
181.215.6.120	1	0
61.98.171.199	1	0
187.187.193.21	0	1
165.225.81.66	0	3
98.64.84.57	1	0
46.161.63.66	71	0
67.215.250.146	7	0
103.251.226.120	2	0
199.249.223.75	172	6
47.11.7.240	0	1
117.200.96.91	0	3
191.101.54.244	10	0
95.89.126.115	2	0
203.249.55.94	2	0
49.34.5.58	0	1
14.97.7.246	0	2
2.29.170.242	4456	0
14.17.122.207	44	0
185.213.20.252	93	0
73.185.49.225	2	0
47.11.210.118	0	2
14.232.172.139	1	0
5.101.222.205	18	0
134.48.22.110	6	0
93.179.90.237	2	0
171.6.156.117	1	0
171.6.156.117	1	0
185.117.149.113	1	0
46.161.58.202	6	0
191.101.145.250	1	0
191.101.145.250	1	0
116.68.105.105	0	2
125.163.151.121	48	0
81.198.25.242	0	7
92.161.182.241	0	5
194.208.63.191	48	0
90.114.80.144	2	0
5.189.200.116	36	0
186.182.82.240	60	0
122.15.212.146	0	1
122.15.212.146	0	1
122.15.212.146	0	1
137.97.9.40	0	1
189.122.18.125	15	0
187.188.28.45	1	0
190.9.214.105	0	5
222.130.177.64	3	0
123.136.249.120	0	1
178.220.115.243	0	2
14.102.246.210	1	0
178.119.240.143	3	0
98.89.83.30	1	0
50.106.25.168	4	0
185.89.217.189	1	0
5.62.159.38	181	0
186.95.24.238	2	0
5.189.202.171	8	0
71.223.161.63	1	0
14.207.158.135	120	0
216.239.90.19	301	18
176.153.26.5	1	2
99.61.192.35	1	0
73.48.161.172	1	0
73.48.161.172	1	0
73.48.161.172	1	0
188.166.82.41	1	1
117.5.75.127	2	0
183.83.78.172	1	0
172.243.2.129	4	0
84.146.103.72	0	1
5.101.217.177	112	0
110.167.197.122	1	0
5.189.203.43	4	0
95.213.218.108	3	0
185.46.86.22	98	0
191.101.54.127	95	0
194.135.166.12	14	0
79.237.168.168	0	1
45.32.108.44	6	0
186.204.34.46	20	0
117.5.211.1	49	0
69.57.247.218	8	0
70.121.9.224	36	0
209.107.214.71	12	0
189.34.176.93	924	0
80.78.237.5	30	0
14.186.176.190	1	0
84.108.20.44	0	2
176.126.83.77	16	0
104.174.173.170	1	0
219.92.33.137	46	0
78.48.70.89	0	1
186.37.202.178	1	0
71.223.241.223	1	0
71.223.241.223	1	0
73.140.229.40	1	0
188.188.19.204	0	2
195.154.232.98	0	5
112.28.106.231	1	0
62.219.224.250	0	1
93.171.216.68	9	0
37.26.142.184	4	4
87.255.69.86	0	1
87.255.69.86	0	1
157.48.15.35	0	6
50.3.197.73	4	0
23.27.228.81	7	0
190.56.99.94	409	0
76.228.35.48	2	0
5.8.47.100	5	0
110.77.199.103	0	17
54.205.123.87	2	0
183.89.22.222	1	0
14.139.41.109	0	1
186.43.29.31	1	0
173.31.96.193	1	0
173.31.96.193	1	0
77.79.38.5	0	1
95.85.80.229	66	0
191.101.144.238	2	0
50.25.139.252	1	0
50.25.139.252	1	0
177.82.171.180	3	0
113.87.26.63	100	0
77.181.225.187	5	4
103.89.255.122	1	4
107.222.35.45	187	0
200.125.116.65	101	0
202.5.196.66	0	4
158.181.40.154	5	0
86.115.0.94	0	1
68.108.194.244	1	0
68.108.194.244	1	0
68.108.194.244	1	0
110.87.118.235	3	0
105.158.16.153	1	0
188.72.96.182	744	0
14.187.132.10	2	0
85.253.45.35	0	4
188.166.36.54	10	0
111.37.37.235	1	0
111.37.37.235	1	0
79.184.223.137	7	0
34.214.132.226	0	9
74.96.79.23	0	1
188.166.41.162	35	14
117.5.169.43	109	0
76.221.68.186	2	0
185.89.100.48	12	0
74.132.249.206	3	0
91.126.205.238	34	0
5.62.159.143	6	0
188.146.232.177	0	1
188.68.3.92	193	0
200.5.83.150	2391	0
93.179.90.116	78	0
94.185.80.235	87	0
188.104.116.79	0	3
177.232.136.107	0	1
123.16.114.132	29	0
178.254.168.220	2	0
66.249.93.2	1	0
96.30.65.207	58	0
73.84.200.187	3	0
70.35.215.94	0	1
139.0.6.42	4	0
185.46.86.132	6	0
89.177.29.121	0	2
118.44.17.181	1	0
146.185.204.191	1	0
146.185.204.191	1	0
190.111.195.137	30	0
146.185.206.106	5	0
185.2.32.173	641	0
96.31.53.251	1	0
207.41.189.106	2	0
36.63.28.208	28	0
31.170.161.42	3	0
209.107.196.159	4	0
185.46.85.78	15	0
183.12.241.137	1	0
184.167.219.223	3	0
177.34.62.115	4	0
5.189.200.201	87	0
47.11.5.9	0	1
179.218.5.141	11	0
5.62.159.25	4	0
32.209.238.246	1	0
32.209.238.246	1	0
32.209.238.246	1	0
32.209.238.246	1	0
46.70.29.76	1	0
104.222.164.236	2	0
194.152.37.147	3	41
177.80.227.215	342	0
5.101.217.197	84	0
47.8.5.240	2	1
192.40.95.34	1	0
103.244.252.242	1	0
185.89.100.129	64	0
178.82.94.82	0	2
202.100.206.36	0	7
45.249.48.124	44	0
84.42.249.4	0	1
62.12.93.76	4	0
77.93.192.43	0	3
141.101.132.50	101	0
89.201.7.164	0	6
5.15.220.203	3	0
185.69.186.227	3	4
24.193.178.168	0	3
65.26.31.140	62	0
83.99.166.35	1	0
103.254.155.74	2	0
49.34.2.43	0	1
91.142.208.226	3	0
193.93.192.134	736	0
188.68.0.249	39	0
79.110.28.78	151	0
71.211.2.230	1	0
188.72.127.48	110	0
185.217.68.209	1	0
99.242.220.241	1	3
5.62.159.148	407	0
1.70.44.170	4665	0
191.23.199.126	1	0
98.242.127.228	2	0
59.99.48.248	1	6
67.191.200.150	2	0
213.6.149.66	35	0
77.109.86.105	1	3
123.30.177.138	44	0
185.14.194.82	79	0
39.46.86.85	139	0
220.189.194.162	39	0
5.189.200.97	86	0
24.91.41.150	1	0
209.197.20.206	6	0
12.155.92.10	1	0
12.155.92.10	1	0
205.186.180.34	3	0
46.161.60.35	716	0
73.115.6.159	1	0
222.82.198.61	2	7
213.200.15.167	0	1
5.101.220.79	98	0
98.122.86.197	319	0
14.231.215.204	25	0
76.94.77.14	1	0
73.58.220.10	1	0
73.58.220.10	1	0
73.58.220.10	1	0
193.93.192.165	92	0
189.122.214.227	709	0
191.101.54.148	2	0
84.109.80.89	0	2
84.109.80.89	0	2
84.109.80.89	0	2
70.95.65.80	2	0
70.95.65.80	2	0
70.95.65.80	2	0
113.182.18.30	4	0
113.182.18.30	4	0
144.217.161.119	117	24
46.223.254.56	0	1
46.223.254.56	0	1
71.90.148.209	3	0
156.220.69.153	1	0
158.181.19.102	40	0
59.84.240.60	1	0
95.181.176.106	66	0
189.120.152.120	6	0
153.136.8.214	0	18
101.21.80.126	1	0
198.73.50.71	286	82
68.227.43.14	3	0
172.248.74.10	1	0
172.248.74.10	1	0
46.161.56.241	37	0
66.249.93.49	3	0
59.89.245.157	0	5
163.172.73.168	25	0
5.62.154.110	191	0
61.148.243.183	1	7
81.171.81.234	1	0
81.171.81.234	1	0
5.189.203.46	118	0
197.48.60.53	1	0
46.49.43.85	0	2
73.115.17.146	1	0
193.93.192.192	2	0
193.93.192.192	2	0
146.185.206.166	3	0
69.245.162.12	1	0
69.245.162.12	1	0
69.245.162.12	1	0
69.245.162.12	1	0
189.33.47.50	17	0
95.42.141.179	2	0
95.42.141.179	2	0
180.66.236.162	1	0
162.13.152.211	2	0
99.109.226.233	2	0
217.78.6.205	1	2
79.235.120.32	0	2
187.37.143.79	530	0
158.135.163.135	2	0
5.101.219.197	17	0
158.140.180.27	2	0
142.118.105.137	1	0
72.201.118.80	2	0
112.215.243.201	1	0
187.137.61.82	2	9
179.218.101.97	19949	0
181.215.39.116	12	0
82.45.10.45	1	0
205.185.209.141	1	0
180.241.150.70	29	0
5.101.221.20	98	0
188.68.0.19	675	0
47.183.128.151	2	0
47.183.128.151	2	0
103.252.169.182	9	0
162.237.21.238	0	1
103.240.127.33	0	1
171.4.234.224	0	3
76.118.206.235	3	0
37.142.228.191	2	3
67.183.105.87	1	0
67.183.105.87	1	0
67.183.105.87	1	0
91.64.189.196	0	2
93.179.90.82	74	0
)";

class HomeworkTest: public ::testing::Test { 
public: 
   void SetUp() { 
       input<<input_text;
   }
 
   void TearDown() { 
       
   }
   
   std::stringstream input; 
};
