void Jitter(int run, int tower, int channel, TString type)
{
int dataset=3021;
TString listname;
TString cut1;
TString dir;
QChain ch("qtree");
dir="/projecta/projectdirs/cuore/syncData/CUORE/OfficialProcessed/PRL1_DataRelease/output";
listname.Form("%s/ds%d/Blinded_%d_%.3d_%s.list",dir.Data(),dataset,run,tower,type.Data());
cut1.Form("IsStabPulser");

cout<<"File being worked on is "<<listname.Data()<<endl;
int nAdded=ch.Add(listname.Data());
if(nAdded==0){
  cout<<"Could not add file to chain"<<endl;
}


}


int * GetColumn(int grun, int gtower, int gchannel, TString gtype){
  static int c[13];
  int gdataset=3021;
  QChain gch("qtree");
  TString glistname;
  TString gdir;
  TString gchannelcut;

  gdir="/projecta/projectdirs/cuore/syncData/CUORE/OfficialProcessed/PRL1_DataRelease/output";
  glistname.Form("%s/ds%d/Blinded_%d_%.3d_%s.list",gdir.Data(),gdataset,grun,gtower,gtype.Data());
  gchannelcut.Form("Channel==%d",gchannel);
  int cAdded=gch.Add(listname1.Data());

  gch.Draw("Position_X:Position_Y:Channel",gchannelcut.Data(),"GOFF");
  double* gchannelx = gch.GetV1();
  double* gchannely = gch.GetV2();
  double* Gchannelx = new double [1];
  double* Gchannely = new double [1];
  Gchannelx[0] = gchannelx[0];
  Gchannelx[0] = gchannelx[0];
  cout<<"Channel  "<<gchannel<<"  X "<<Gchannelx[0]<<"  Y "<<Gchannely[0]<<endl;

}






}
