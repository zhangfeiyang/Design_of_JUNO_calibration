{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Apr 21 14:44:58 2019) by ROOT version5.34/20
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   gre->SetPoint(0,0.4681978,0.9162403);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,0.6169901,0.9324317);
   gre->SetPointError(1,0,1.018558e-312);
   gre->SetPoint(2,0.7903972,0.9467535);
   gre->SetPointError(2,0,2.631275e-312);
   gre->SetPoint(3,1.216133,0.9706788);
   gre->SetPointError(3,0,2.334195e-312);
   gre->SetPoint(4,1.430491,0.9792521);
   gre->SetPointError(4,0,2.631275e-312);
   gre->SetPoint(5,2.223,1);
   gre->SetPointError(5,0,8.695555e-322);
   gre->SetPoint(6,5.048892,1.019978);
   gre->SetPointError(6,0,1.58101e-322);
   gre->SetPoint(7,6.330999,1.032789);
   gre->SetPointError(7,0,6.902735e-310);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,6.917279);
   Graph_Graph1->SetMinimum(0.9045854);
   Graph_Graph1->SetMaximum(1.044444);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Energy [MeV]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("E_{rec}/E_{true}");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(8);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(7);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   gre->SetPoint(0,0.4681978,0.9160709);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,0.6169901,0.9329201);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,0.7903972,0.9470924);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,1.216133,0.9705408);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,1.430491,0.9788684);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,2.223,1.00001);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,5.048892,1.020871);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,6.330999,1.031781);
   gre->SetPointError(7,0,0);
   gre->Draw("pc");
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","data","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","prediction","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
