{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Apr 10 21:37:23 2019) by ROOT version5.34/11
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(-0.8981255,0.7289246,10.11206,3.385063);
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
   gre->SetPoint(0,0.9369966,2.93543);
   gre->SetPointError(0,9.11837e-05,0.00694294);
   gre->SetPoint(1,1.933927,2.03181);
   gre->SetPointError(1,0.000130116,0.00477942);
   gre->SetPoint(2,2.990158,1.7145);
   gre->SetPointError(2,0.000169912,0.00412127);
   gre->SetPoint(3,4.048948,1.51318);
   gre->SetPointError(3,0.000203067,0.00360971);
   gre->SetPoint(4,5.106424,1.39691);
   gre->SetPointError(4,0.000237238,0.00335842);
   gre->SetPoint(5,6.16438,1.30442);
   gre->SetPointError(5,0.000267326,0.00317452);
   gre->SetPoint(6,7.221278,1.23535);
   gre->SetPointError(6,0.000297215,0.00300798);
   gre->SetPoint(7,8.276704,1.17449);
   gre->SetPointError(7,0.000324371,0.00287572);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.2028931,9.011041);
   Graph_Graph1->SetMinimum(0.9945384);
   Graph_Graph1->SetMaximum(3.119449);
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
   
   
   TF1 *f = new TF1("f","sqrt([0]*[0]/x+[1]*[1])",0.2028931,9.011041);
   f->SetFillColor(19);
   f->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   f->SetMarkerColor(ci);
   f->SetMarkerStyle(24);
   f->SetMarkerSize(0.5);

   ci = TColor::GetColor("#ff0000");
   f->SetLineColor(ci);
   f->SetLineWidth(2);
   f->SetChisquare(133.503);
   f->SetNDF(6);
   f->GetXaxis()->SetTitleOffset(1.1);
   f->GetYaxis()->SetTitleOffset(1.25);
   f->SetParameter(0,2.707283);
   f->SetParError(0,0.005698925);
   f->SetParLimits(0,0,0);
   f->SetParameter(1,0.7068726);
   f->SetParError(1,0.004769884);
   f->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(f);
   
   TPaveStats *ptstats = new TPaveStats(0.5,0.7,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("#chi^{2} / ndf = 133.5 / 6");
   text = ptstats->AddText("a        = 2.707 #pm 0.005699 ");
   text = ptstats->AddText("b        = 0.7069 #pm 0.00477 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
      tex = new TLatex(5,2,"#sqrt{a^{2}+(1.6b)^{2}} = 2.934");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
