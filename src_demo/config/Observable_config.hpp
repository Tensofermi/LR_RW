#pragma once

void Observable::initObservable()  // add addBasicObser() & addCombiObser()
{

    //  Observables               Name           				Description             		 A     +     B  *  Obs 
    addBasicObser(para.i_N_8      , "N_8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_N_16     , "N_16"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N_32     , "N_32"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N_64     , "N_64"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N_128    , "N_128"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N_256    , "N_256"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N_512    , "N_512"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N_1024   , "N_1024"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N_2048   , "N_2048"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N_4096   , "N_4096"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N_8192   , "N_8192"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N_16384  , "N_16384"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N_32768  , "N_32768"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N_65536  , "N_65536"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N_131072 , "N_131072" , "" , 0 , 1.0 );


    addBasicObser(para.i_N2_8      , "N2_8"      , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_16     , "N2_16"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_32     , "N2_32"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_64     , "N2_64"     , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_128    , "N2_128"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_256    , "N2_256"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_512    , "N2_512"    , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_1024   , "N2_1024"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_2048   , "N2_2048"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_4096   , "N2_4096"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_8192   , "N2_8192"   , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_16384  , "N2_16384"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_32768  , "N2_32768"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_65536  , "N2_65536"  , "" , 0 , 1.0 );
    addBasicObser(para.i_N2_131072 , "N2_131072" , "" , 0 , 1.0 );

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
	str += l_jf("sigma = " + toStr(para.sigma), 22) + l_jf("R = " + toStr(para.R), 22) + "\n";
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