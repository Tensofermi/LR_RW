#pragma once

void Observable::initObservable()  // add addBasicObser() & addCombiObser()
{

    //  Observables               Name           				Description             		 A     +     B  *  Obs 
    // a = 1/8
    addBasicObser(para.i_chi_k_1       , "chi_k_1"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_1      , "corr_L_1"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_1    , "d_w_1"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_1  , "d_u_1"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_1        ,  "n_1"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_1   , "d_w2_1"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_1 , "d_u2_1"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_1       , "n2_1"      , " " , 0 , 1.0 );

	// a = 2/8
    addBasicObser(para.i_chi_k_2       , "chi_k_2"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_2      , "corr_L_2"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_2    , "d_w_2"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_2  , "d_u_2"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_2        ,  "n_2"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_2   , "d_w2_2"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_2 , "d_u2_2"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_2       , "n2_2"      , " " , 0 , 1.0 );

	// a = 3/8
    addBasicObser(para.i_chi_k_3       , "chi_k_3"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_3      , "corr_L_3"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_3    , "d_w_3"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_3  , "d_u_3"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_3        ,  "n_3"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_3   , "d_w2_3"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_3 , "d_u2_3"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_3       , "n2_3"      , " " , 0 , 1.0 );

    // a = 4/8
    addBasicObser(para.i_chi_k_4       , "chi_k_4"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_4      , "corr_L_4"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_4    , "d_w_4"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_4  , "d_u_4"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_4        ,  "n_4"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_4   , "d_w2_4"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_4 , "d_u2_4"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_4       , "n2_4"      , " " , 0 , 1.0 );


    // a = 5/8
    addBasicObser(para.i_chi_k_5       , "chi_k_5"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_5      , "corr_L_5"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_5    , "d_w_5"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_5  , "d_u_5"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_5        ,  "n_5"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_5   , "d_w2_5"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_5 , "d_u2_5"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_5       , "n2_5"      , " " , 0 , 1.0 );


    // a = 6/8
    addBasicObser(para.i_chi_k_6       , "chi_k_6"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_6      , "corr_L_6"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_6    , "d_w_6"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_6  , "d_u_6"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_6        ,  "n_6"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_6   , "d_w2_6"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_6 , "d_u2_6"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_6       , "n2_6"      , " " , 0 , 1.0 );

    // a = 7/8
    addBasicObser(para.i_chi_k_7       , "chi_k_7"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_7      , "corr_L_7"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_7    , "d_w_7"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_7  , "d_u_7"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_7        ,  "n_7"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_7   , "d_w2_7"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_7 , "d_u2_7"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_7       , "n2_7"      , " " , 0 , 1.0 );

    // a = 8/8
    addBasicObser(para.i_chi_k_8       , "chi_k_8"      , "" , 0 , 1.0/para.L/para.L );
	addCombiObser(para.i_corr_L_8      , "corr_L_8"      , "" , 0 , 1.0 );
	addBasicObser(para.i_dist_wrap_8    , "d_w_8"  , "", 0, 1.0);
	addBasicObser(para.i_dist_unwrap_8  , "d_u_8"  , "", 0, 1.0);
	addBasicObser(para.i_nsite_8        ,  "n_8"  , "", 0, 1.0);
	addCombiObser(para.i_dist_wrap2_8   , "d_w2_8"      , " " , 0 , 1.0 );
	addCombiObser(para.i_dist_unwrap2_8 , "d_u2_8"      , " " , 0 , 1.0 );
	addCombiObser(para.i_nsite2_8       , "n2_8"      , " " , 0 , 1.0 );
	
}

void Observable::calCombiObser()  // add Result[]
{
	Result[para.i_corr_L_1] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(1.0 / 8.0 * 1.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_1] - 1.0);
	Result[para.i_corr_L_2] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(2.0 / 8.0 * 2.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_2] - 1.0);
	Result[para.i_corr_L_3] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(3.0 / 8.0 * 3.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_3] - 1.0);
	Result[para.i_corr_L_4] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(4.0 / 8.0 * 4.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_4] - 1.0);
	Result[para.i_corr_L_5] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(5.0 / 8.0 * 5.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_5] - 1.0);
	Result[para.i_corr_L_6] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(6.0 / 8.0 * 6.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_6] - 1.0);
	Result[para.i_corr_L_7] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(7.0 / 8.0 * 7.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_7] - 1.0);
	Result[para.i_corr_L_8] = 1.0 / (2.0 * para.L * sin(M_PI / para.L)) * sqrt(8.0 / 8.0 * 8.0 / 8.0 * para.L * para.L * para.L * para.L / Ob[para.i_chi_k_8] - 1.0);

	Result[para.i_dist_wrap2_1] = Ob[para.i_dist_wrap_1] * Ob[para.i_dist_wrap_1];
	Result[para.i_dist_wrap2_2] = Ob[para.i_dist_wrap_2] * Ob[para.i_dist_wrap_2];
	Result[para.i_dist_wrap2_3] = Ob[para.i_dist_wrap_3] * Ob[para.i_dist_wrap_3];
	Result[para.i_dist_wrap2_4] = Ob[para.i_dist_wrap_4] * Ob[para.i_dist_wrap_4];
	Result[para.i_dist_wrap2_5] = Ob[para.i_dist_wrap_5] * Ob[para.i_dist_wrap_5];
	Result[para.i_dist_wrap2_6] = Ob[para.i_dist_wrap_6] * Ob[para.i_dist_wrap_6];
	Result[para.i_dist_wrap2_7] = Ob[para.i_dist_wrap_7] * Ob[para.i_dist_wrap_7];
	Result[para.i_dist_wrap2_8] = Ob[para.i_dist_wrap_8] * Ob[para.i_dist_wrap_8];
	
	Result[para.i_dist_unwrap2_1] = Ob[para.i_dist_unwrap_1] * Ob[para.i_dist_unwrap_1];
	Result[para.i_dist_unwrap2_2] = Ob[para.i_dist_unwrap_2] * Ob[para.i_dist_unwrap_2];
	Result[para.i_dist_unwrap2_3] = Ob[para.i_dist_unwrap_3] * Ob[para.i_dist_unwrap_3];
	Result[para.i_dist_unwrap2_4] = Ob[para.i_dist_unwrap_4] * Ob[para.i_dist_unwrap_4];
	Result[para.i_dist_unwrap2_5] = Ob[para.i_dist_unwrap_5] * Ob[para.i_dist_unwrap_5];
	Result[para.i_dist_unwrap2_6] = Ob[para.i_dist_unwrap_6] * Ob[para.i_dist_unwrap_6];
	Result[para.i_dist_unwrap2_7] = Ob[para.i_dist_unwrap_7] * Ob[para.i_dist_unwrap_7];
	Result[para.i_dist_unwrap2_8] = Ob[para.i_dist_unwrap_8] * Ob[para.i_dist_unwrap_8];
	
	Result[para.i_nsite2_1] = Ob[para.i_nsite_1] * Ob[para.i_nsite_1];
	Result[para.i_nsite2_2] = Ob[para.i_nsite_2] * Ob[para.i_nsite_2];
	Result[para.i_nsite2_3] = Ob[para.i_nsite_3] * Ob[para.i_nsite_3];
	Result[para.i_nsite2_4] = Ob[para.i_nsite_4] * Ob[para.i_nsite_4];
	Result[para.i_nsite2_5] = Ob[para.i_nsite_5] * Ob[para.i_nsite_5];
	Result[para.i_nsite2_6] = Ob[para.i_nsite_6] * Ob[para.i_nsite_6];
	Result[para.i_nsite2_7] = Ob[para.i_nsite_7] * Ob[para.i_nsite_7];
	Result[para.i_nsite2_8] = Ob[para.i_nsite_8] * Ob[para.i_nsite_8];

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
	str += l_jf("sigma = " + toStr(para.sigma), 22) + l_jf("L = " + toStr(para.L), 22) + "\n";
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