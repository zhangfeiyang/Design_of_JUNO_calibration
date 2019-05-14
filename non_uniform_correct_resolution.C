{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Apr 10 21:34:10 2019) by ROOT version5.34/11
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(-0.8981511,0.717534,10.1122,3.373569);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.9369984,2.92403);
   gre->SetPointError(0,9.07e-05,0.0068666);
   gre->SetPoint(1,1.933897,2.01655);
   gre->SetPointError(1,0.000129,0.0047148);
   gre->SetPoint(2,2.990089,1.69778);
   gre->SetPointError(2,0.0001683,0.0040523);
   gre->SetPoint(3,4.049016,1.507);
   gre->SetPointError(3,0.0002023,0.0036234);
   gre->SetPoint(4,5.106502,1.38714);
   gre->SetPointError(4,0.0002359,0.0033301);
   gre->SetPoint(5,6.164518,1.29945);
   gre->SetPointError(5,0.0002662,0.0031905);
   gre->SetPoint(6,7.221464,1.2272);
   gre->SetPointError(6,0.0002952,0.0029983);
   gre->SetPoint(7,8.276822,1.16301);
   gre->SetPointError(7,0.0003211,0.0028035);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.2028842,9.011166);
   Graph_Graph1->SetMinimum(0.9831375);
   Graph_Graph1->SetMaximum(3.107966);
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
   
   
   TF1 *f = new TF1("f","sqrt([0]*[0]/x+[1]*[1])",0.2028842,9.011166);
   f->SetFillColor(19);
   f->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   f->SetMarkerColor(ci);
   f->SetMarkerStyle(24);
   f->SetMarkerSize(0.5);

   ci = TColor::GetColor("#ff0000");
   f->SetLineColor(ci);
   f->SetLineWidth(2);
   f->SetChisquare(169.0465);
   f->SetNDF(6);
   f->GetXaxis()->SetTitleOffset(1.1);
   f->GetYaxis()->SetTitleOffset(1.25);
   f->SetParameter(0,2.692916);
   f->SetParError(0,0.005622246);
   f->SetParLimits(0,0,0);
   f->SetParameter(1,0.6989886);
   f->SetParError(1,0.004731433);
   f->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(f);
   
   TPaveStats *ptstats = new TPaveStats(0.5,0.7,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("#chi^{2} / ndf =   169 / 6");
   text = ptstats->AddText("a        = 2.693 #pm 0.005622 ");
   text = ptstats->AddText("b        = 0.699 #pm 0.004731 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
      tex = new TLatex(5,2,"#sqrt{a^{2}+(1.6b)^{2}} = 2.915");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
