float sensor=0; //感測器值存放的地方
int tempc[4]; //個位數、小數點下第一位和第二位儲存陣列

void setup(){ 
  Serial.begin(115200);
  pinMode(A0,INPUT);//A0設為輸入
}
 
void loop (){
   sensor=analogRead( A0);//讀取感測器值存到sensor
   sensor = (5.0 * sensor * 100.0)/1024.0; //轉公式:V(T)=(10mV/℃)×T(℃)
  tempc[0]=int(sensor/10);//取個十位數
  tempc[1]=int((sensor-(tempc[0]*10))/1);//取個位數
  tempc[2]=int((sensor-(tempc[0]*10)-tempc[1])/0.1);//取個小數點下第一位
  tempc[3]=int((sensor-(tempc[0]*10)-(tempc[1]*1)-tempc[2]*0.1)/0.01);//取個小數點下第二位
  Serial.write(tempc[0]); //資料丟出
  Serial.write(tempc[1]); 
  Serial.write(tempc[2]); 
    Serial.write(tempc[3]); 
    delay(100);//延遲0.1秒
}
