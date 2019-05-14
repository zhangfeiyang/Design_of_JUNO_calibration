{
//=========Macro generated from canvas: c1/c1
//=========  (Mon May 13 10:51:22 2019) by ROOT version5.34/20
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-0.9155844,0.7268651,10.3108,3.391169);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.7);
   gre->SetPoint(0,0.9554789,2.939212);
   gre->SetPointError(0,0,0.00790621);
   gre->SetPoint(1,1.972041,2.041138);
   gre->SetPointError(1,0,0.006642487);
   gre->SetPoint(2,3.049008,1.719038);
   gre->SetPointError(2,0,0.0064843);
   gre->SetPoint(3,4.128679,1.520785);
   gre->SetPointError(3,0,0.005837974);
   gre->SetPoint(4,5.207111,1.402911);
   gre->SetPointError(4,0,0.006357904);
   gre->SetPoint(5,6.285954,1.311214);
   gre->SetPointError(5,0,0.005952382);
   gre->SetPoint(6,7.36361,1.239148);
   gre->SetPointError(6,0,0.006146451);
   gre->SetPoint(7,8.439732,1.177278);
   gre->SetPointError(7,0,0.006361829);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.2070536,9.188157);
   Graph_Graph1->SetMinimum(0.9932956);
   Graph_Graph1->SetMaximum(3.124739);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph1->SetMarkerColor(ci);
   Graph_Graph1->SetMarkerStyle(24);
   Graph_Graph1->SetMarkerSize(0.5);
   Graph_Graph1->GetXaxis()->SetTitle("E_{rec}[MeV]");
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitle("Energy resolution[%]");
   Graph_Graph1->GetYaxis()->SetTitleOffset(0.9);
   gre->SetHistogram(Graph_Graph1);
   
   
   TF1 *f = new TF1("f","sqrt([0]*[0]/x+[1]*[1])",0.2070536,9.188157);
   f->SetFillColor(19);
   f->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   f->SetMarkerColor(ci);
   f->SetMarkerStyle(24);
   f->SetMarkerSize(0.5);

   ci = TColor::GetColor("#ff0000");
   f->SetLineColor(ci);
   f->SetLineWidth(2);
   f->SetChisquare(65.62378);
   f->SetNDF(6);
   f->GetXaxis()->SetTitleOffset(1.1);
   f->GetYaxis()->SetTitleOffset(1.25);
   f->SetParameter(0,2.754007);
   f->SetParError(0,0.007721577);
   f->SetParLimits(0,0,0);
   f->SetParameter(1,0.7000992);
   f->SetParError(1,0.008047159);
   f->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(f);
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
