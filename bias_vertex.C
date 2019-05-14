{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Apr  9 17:34:56 2019) by ROOT version5.34/20
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(-0.9158077,-0.25,10.31118,0.25);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.955448,-0.04259074);
   gre->SetPointError(0,9.11837e-05,0.01363254);
   gre->SetPoint(1,1.97201,-0.03658713);
   gre->SetPointError(1,0.000130116,0.01030899);
   gre->SetPoint(2,3.04904,-0.02675283);
   gre->SetPointError(2,0.000169912,0.01005489);
   gre->SetPoint(3,4.12868,-0.008269932);
   gre->SetPointError(3,0.000203067,0.01003712);
   gre->SetPoint(4,5.20698,-0.005691181);
   gre->SetPointError(4,0.000237238,0.009307684);
   gre->SetPoint(5,6.28577,-0.003928197);
   gre->SetPointError(5,0.000267326,0.01030079);
   gre->SetPoint(6,7.36348,-0.02785347);
   gre->SetPointError(6,0.000297215,0.01008022);
   gre->SetPoint(7,8.43969,-0.02119829);
   gre->SetPointError(7,0.000324371,0.01055511);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.2068911,9.18848);
   Graph_Graph1->SetMinimum(-0.2);
   Graph_Graph1->SetMaximum(0.2);
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
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetYaxis()->SetTitle("Energy resolution[%]");
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
