#pragma once

void Observable::initObservable()  // add addBasicObser() & addCombiObser()
{

    //  Observables               Name           				Description             		 A     +     B  *  Obs 
    addBasicObser(para.i_R_1e1      , "R_1e1"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e2      , "R_1e2"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e3      , "R_1e3"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e4      , "R_1e4"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e5      , "R_1e5"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e6      , "R_1e6"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e7      , "R_1e7"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e8      , "R_1e8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e9      , "R_1e9"      , "" , 0 , 1.0 );
    addBasicObser(para.i_R_1e10     , "R_1e10"     , "" , 0 , 1.0 );

    addBasicObser(para.i_R2_1e1     , "R2_1e1"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e2     , "R2_1e2"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e3     , "R2_1e3"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e4     , "R2_1e4"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e5     , "R2_1e5"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e6     , "R2_1e6"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e7     , "R2_1e7"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e8     , "R2_1e8"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e9     , "R2_1e9"     , "" , 0 , 1.0 );
    addBasicObser(para.i_R2_1e10    , "R2_1e10"    , "" , 0 , 1.0 );

	addBasicObser(para.i_ns_1e1      , "n_1e1"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e2      , "n_1e2"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e3      , "n_1e3"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e4      , "n_1e4"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e5      , "n_1e5"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e6      , "n_1e6"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e7      , "n_1e7"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e8      , "n_1e8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e9      , "n_1e9"      , "" , 0 , 1.0 );
    addBasicObser(para.i_ns_1e10     , "n_1e10"     , "" , 0 , 1.0 );

    addBasicObser(para.i_ns2_1e1     , "n2_1e1"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e2     , "n2_1e2"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e3     , "n2_1e3"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e4     , "n2_1e4"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e5     , "n2_1e5"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e6     , "n2_1e6"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e7     , "n2_1e7"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e8     , "n2_1e8"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e9     , "n2_1e9"     , "" , 0 , 1.0 );
    addBasicObser(para.i_ns2_1e10    , "n2_1e10"    , "" , 0 , 1.0 );

	addBasicObser(para.i_Mn_1e1      , "Mn_1e1"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e2      , "Mn_1e2"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e3      , "Mn_1e3"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e4      , "Mn_1e4"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e5      , "Mn_1e5"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e6      , "Mn_1e6"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e7      , "Mn_1e7"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e8      , "Mn_1e8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e9      , "Mn_1e9"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Mn_1e10     , "Mn_1e10"     , "" , 0 , 1.0 );

    addBasicObser(para.i_Pn_1e1      , "Pn_1e1"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e2      , "Pn_1e2"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e3      , "Pn_1e3"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e4      , "Pn_1e4"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e5      , "Pn_1e5"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e6      , "Pn_1e6"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e7      , "Pn_1e7"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e8      , "Pn_1e8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e9      , "Pn_1e9"      , "" , 0 , 1.0 );
    addBasicObser(para.i_Pn_1e10     , "Pn_1e10"     , "" , 0 , 1.0 );

	addBasicObser(para.i_r_1e1      , "r_1e1"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e2      , "r_1e2"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e3      , "r_1e3"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e4      , "r_1e4"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e5      , "r_1e5"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e6      , "r_1e6"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e7      , "r_1e7"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e8      , "r_1e8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e9      , "r_1e9"      , "" , 0 , 1.0 );
    addBasicObser(para.i_r_1e10     , "r_1e10"     , "" , 0 , 1.0 );

    addBasicObser(para.i_r2_1e1     , "r2_1e1"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e2     , "r2_1e2"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e3     , "r2_1e3"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e4     , "r2_1e4"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e5     , "r2_1e5"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e6     , "r2_1e6"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e7     , "r2_1e7"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e8     , "r2_1e8"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e9     , "r2_1e9"     , "" , 0 , 1.0 );
    addBasicObser(para.i_r2_1e10    , "r2_1e10"    , "" , 0 , 1.0 );

}

void Observable::calCombiObser()  // add Result[]
{
	
}

// ---------------------------------------------
// This function prints the Monte Carlo results.
// ---------------------------------------------
std::string Observable::printOutput(bool Flag)
{
	std::string str = "";
	ZZ0 = NBin * NperBin + IBin;

	str += "==============================================================================\n";
	str += l_jf("D = " + toStr(para.D), 22) + "\n";
	str += l_jf("sigma = " + toStr(para.sigma), 22) + l_jf("N = " + toStr(para.N), 22) + "\n";
	str += l_jf("N_Therm = " + toStr(para.N_Therm), 22) + l_jf("N_Total = " + toStr(para.N_Total), 22) + l_jf("Seed = " + toStr(para.Seed), 22) + "\n";
	str += l_jf("N_Measure = " + toStr(para.N_Measure), 22) + l_jf("N_Each = " + toStr(para.N_Each), 22) + l_jf("NBlock = " + toStr(para.NBlock), 22) + "\n";
	str += "==============================================================================\n";

	if(Flag)
	{
		double time_ratio = MCStep / (double)para.N_Each / (double)para.N_Total;

		if(NBin >= NBlock)
		{
			ZZ = (NBin / NBlock) * NBlock * NperBin;
			//--------------------------------------------------//
			//------------ obtain average and error ------------//
			//--------------------------------------------------//
			calAveErr();	
			//--------------------------------------------------//
			//------------ obtain average and error ------------//
			//--------------------------------------------------//
			str += "Average: ZZ = " + toStr(ZZ0) + " , MCStep = " + toStr(MCStep0) + " , Status = " + dou2str(100.0 * time_ratio, 2) + "%" + "\n";
			str += printAverage();
		}
		else
		{
			str += "    The samples are too few!!!\n";
		}
		str += "Simulation Time: " + ck.tick() + " , Total: " + ck.exportTime() + " , " + ck.exportNow() + "\n";

		//---------------------------------------------------------------
		//------------------ Estimate Time ------------------------------
		//---------------------------------------------------------------
		str += "==============================================================================\n";
		double total_time_estimate = fromStr<double>(ck.exportTime_sec()) / time_ratio;
		double remaining_time_estimate = total_time_estimate - fromStr<double>(ck.exportTime_sec());
		
		str += "Estimated Total Time     = " + ck.formTime(total_time_estimate) + " \t= " + dou2str(total_time_estimate, 2) + " s\n";
		str += "Estimated Remaining Time = " + ck.formTime(remaining_time_estimate) + " \t= " + dou2str(remaining_time_estimate, 2) + " s\n";
		//---------------------------------------------------------------
		//------------------ Estimate Time ------------------------------
		//---------------------------------------------------------------
	}
	else
	{	
		double time_ratio = MCStep / (double)para.N_Each / (double)para.N_Therm;
		str += "Current: ZZ0 = " + toStr(ZZ0) + " , MCStep0 = " + toStr(MCStep0) + " , Status = " + dou2str(100.0 * time_ratio, 2) + "%" + "\n";
		str += printCurrent();
		str += "Therm Time: " + ck.tick() + " , Total: " + ck.exportTime() + " , " + ck.exportNow() + "\n";
		
		//---------------------------------------------------------------
		//------------------ Estimate Time ------------------------------
		//---------------------------------------------------------------
		str += "==============================================================================\n";
		double total_time_estimate = fromStr<double>(ck.exportTime_sec()) / time_ratio;
		double remaining_time_estimate = total_time_estimate - fromStr<double>(ck.exportTime_sec());
		
		str += "Estimated Thermalizing Time  = " + ck.formTime(total_time_estimate) + "\t= " + dou2str(total_time_estimate, 2) + " s\n";
		str += "Estimated Remaining Time     = " + ck.formTime(remaining_time_estimate) + "\t= " + dou2str(remaining_time_estimate, 2) + " s\n";
		//---------------------------------------------------------------
		//------------------ Estimate Time ------------------------------
		//---------------------------------------------------------------
	}
	
	str += "==============================================================================\n";

	return str;
}