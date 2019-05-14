{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Apr  8 21:50:17 2019) by ROOT version5.34/20
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(-0.9158338,-0.25,10.31132,0.25);
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
   gre->SetPoint(0,0.9554499,-0.04239197);
   gre->SetPointError(0,9.07e-05,0.01359717);
   gre->SetPoint(1,1.97198,-0.03811294);
   gre->SetPointError(1,0.000129,0.01027289);
   gre->SetPoint(2,3.04897,-0.0290513);
   gre->SetPointError(2,0.0001683,0.0100257);
   gre->SetPoint(3,4.12875,-0.006579459);
   gre->SetPointError(3,0.0002023,0.01002803);
   gre->SetPoint(4,5.20706,-0.00415871);
   gre->SetPointError(4,0.0002359,0.009295134);
   gre->SetPoint(5,6.28591,-0.001699441);
   gre->SetPointError(5,0.0002662,0.01029341);
   gre->SetPoint(6,7.36367,-0.02527661);
   gre->SetPointError(6,0.0002952,0.0100693);
   gre->SetPoint(7,8.43981,-0.0197791);
   gre->SetPointError(7,0.0003211,0.01054106);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.206882,9.188608);
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
