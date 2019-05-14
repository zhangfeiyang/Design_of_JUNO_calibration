{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Apr  9 16:45:50 2019) by ROOT version5.34/20
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(8);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1.022,76.68387836);
   graph->SetPoint(1,2,60.81798817);
   graph->SetPoint(2,3,51.49145758);
   graph->SetPoint(3,4,45.87054825);
   graph->SetPoint(4,5,42.48408001);
   graph->SetPoint(5,6,39.6424659);
   graph->SetPoint(6,7,38.05431231);
   graph->SetPoint(7,8,36.35711388);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.3242,8.6978);
   Graph_Graph1->SetMinimum(32.32444);
   Graph_Graph1->SetMaximum(80.71655);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph1->SetMarkerColor(ci);
   Graph_Graph1->SetMarkerStyle(24);
   Graph_Graph1->SetMarkerSize(0.5);
   Graph_Graph1->GetXaxis()->SetTitle("E_{true} [MeV]");
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitle("sigma [mm]");
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
