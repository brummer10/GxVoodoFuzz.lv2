// generated from file './/voodoo.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace voodoo {

template <int tab_size>
struct table1d_imp { // 1-dimensional clipping table
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<100> clip __rt_data = {
	0.005,0.795235013262,101.97,100, {
	0.00548195523036,0.016445865691,0.0274097761516,0.0383736866119,0.0493375970718,
	0.060301507531,0.0712654179894,0.0822293284464,0.0931932389016,0.104157149354,
	0.115121059803,0.126084970245,0.13704888068,0.148012791103,0.158976701508,
	0.169940611889,0.180904522235,0.19186843253,0.202832342751,0.213796252866,
	0.224760162828,0.23572407257,0.246687981995,0.257651890962,0.26861579927,
	0.279579706628,0.290543612617,0.301507516632,0.312471417804,0.323435314878,
	0.334399206045,0.3453630887,0.356326959087,0.367290811794,0.378254639021,
	0.389218429528,0.400182167115,0.411145828437,0.422109379849,0.433072772871,
	0.444035937638,0.454998773485,0.465961135365,0.476922814321,0.48788350936,
	0.498842787024,0.509800023297,0.520754320256,0.531704386732,0.542648367922,
	0.55358360312,0.564506283341,0.575410971703,0.586289940184,0.597132269761,
	0.607922663898,0.618639951041,0.629255322196,0.639730493837,0.650016225239,
	0.660051925492,0.669767316942,0.679086989359,0.687937882416,0.696258343947,
	0.704006183628,0.711163121782,0.717734492237,0.723745022743,0.72923269117,
	0.734242606851,0.738822090117,0.743017303269,0.74687127245,0.750422944114,
	0.7537069184,0.756753578753,0.759589425229,0.762237491115,0.764717773458,
	0.767047640962,0.769242202516,0.771314630963,0.773276442704,0.775137736666,
	0.776907397287,0.778593266396,0.780202288563,0.781740634041,0.783213802858,
	0.784626713121,0.785983776084,0.787288960129,0.788545845459,0.789757670968,
	0.790927374556,0.792057627879,0.793150866414,0.794209315546,0.795235013262
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fVec0[2];
	double 	fConst36;
	double 	fRec5[2];
	double 	fRec4[5];
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fVec1[2];
	double 	fRec2[2];
	double 	fRec1[3];
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec6[2];
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fRec7[5];
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fVec2[5];
	double 	fConst83;
	FAUSTFLOAT 	fsliderV0;
	FAUSTFLOAT 	*fsliderV0_;
	double 	fRecV0[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "voodo";
	name = N_("Voodoo Fuzz");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<5; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<5; i++) fRec7[i] = 0;
	for (int i=0; i<5; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRecV0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (3.39631298042214e-10 * fConst1);
	fConst3 = (8.7778312967401e-08 + fConst2);
	fConst4 = (2.62817078276078e-10 * fConst1);
	fConst5 = (2.29818308420914e-08 + fConst4);
	fConst6 = (fConst2 - 8.7778312967401e-08);
	fConst7 = (fConst4 - 2.29818308420914e-08);
	fConst8 = faustpower<2>(fConst1);
	fConst9 = (470.33999466970965 / double(iConst0));
	fConst10 = (1 - fConst9);
	fConst11 = (9.71311096779957e-21 * fConst1);
	fConst12 = (1.1042620265193e-09 + (fConst1 * (3.26773250738451e-12 + (fConst1 * (6.96365691353043e-15 + fConst11)))));
	fConst13 = (8.12169832090958e-21 * fConst1);
	fConst14 = ((fConst1 * ((fConst1 * (0 - (5.82118523726811e-15 + fConst13))) - 4.31481150239478e-12)) - 7.104075280474e-10);
	fConst15 = (8.04048133770048e-21 * fConst1);
	fConst16 = (7.03303452766926e-10 + (fConst1 * (4.27166338737084e-12 + (fConst1 * (5.76297338489543e-15 + fConst15)))));
	fConst17 = (1.29573032129332e-20 * fConst1);
	fConst18 = ((fConst1 * (3.82498347175896e-13 - fConst17)) - 3.1039506016118e-11);
	fConst19 = (1.29573032129332e-22 * fConst1);
	fConst20 = ((fConst1 * (3.82498347175896e-15 - fConst19)) - 3.1039506016118e-13);
	fConst21 = ((fConst1 * (3.26773250738451e-12 + (fConst1 * (fConst11 - 6.96365691353043e-15)))) - 1.1042620265193e-09);
	fConst22 = (7.104075280474e-10 + (fConst1 * ((fConst1 * (5.82118523726811e-15 - fConst13)) - 4.31481150239478e-12)));
	fConst23 = ((fConst1 * (4.27166338737084e-12 + (fConst1 * (fConst15 - 5.76297338489543e-15)))) - 7.03303452766926e-10);
	fConst24 = (3.88524438711983e-20 * fConst1);
	fConst25 = ((fConst8 * (1.39273138270609e-14 - fConst24)) - 2.20852405303861e-09);
	fConst26 = (3.24867932836383e-20 * fConst1);
	fConst27 = (1.4208150560948e-09 + (fConst8 * (fConst26 - 1.16423704745362e-14)));
	fConst28 = (3.21619253508019e-20 * fConst1);
	fConst29 = ((fConst8 * (1.15259467697909e-14 - fConst28)) - 1.40660690553385e-09);
	fConst30 = (8.62962300478957e-12 - (4.87301899254574e-20 * fConst8));
	fConst31 = ((4.82428880262029e-20 * fConst8) - 8.54332677474167e-12);
	fConst32 = ((5.82786658067974e-20 * fConst8) - 6.53546501476902e-12);
	fConst33 = (2.20852405303861e-09 + (fConst8 * (0 - (1.39273138270609e-14 + fConst24))));
	fConst34 = ((fConst8 * (1.16423704745362e-14 + fConst26)) - 1.4208150560948e-09);
	fConst35 = (1.40660690553385e-09 + (fConst8 * (0 - (1.15259467697909e-14 + fConst28))));
	fConst36 = (1.0 / (1 + fConst9));
	fConst37 = (5.18292128517328e-20 * fConst1);
	fConst38 = (fConst37 - 7.64996694351791e-13);
	fConst39 = (5.18292128517328e-22 * fConst1);
	fConst40 = (fConst39 - 7.64996694351791e-15);
	fConst41 = (6.2079012032236e-11 - (7.77438192775992e-20 * fConst8));
	fConst42 = (6.2079012032236e-13 - (7.77438192775992e-22 * fConst8));
	fConst43 = (7.64996694351791e-13 + fConst37);
	fConst44 = (7.64996694351791e-15 + fConst39);
	fConst45 = ((fConst1 * (0 - (3.82498347175896e-13 + fConst17))) - 3.1039506016118e-11);
	fConst46 = ((fConst1 * (0 - (3.82498347175896e-15 + fConst19))) - 3.1039506016118e-13);
	fConst47 = (1.76053534694798e-06 * fConst1);
	fConst48 = (0 - fConst47);
	fConst49 = (1.42245665510589e-19 * fConst1);
	fConst50 = (3.53991863558532e-13 + (fConst1 * (2.96233000867528e-13 + (fConst1 * (5.54797019446372e-16 + fConst49)))));
	fConst51 = (1.44796935929731e-19 * fConst1);
	fConst52 = (fConst1 * ((fConst1 * (0 - (6.58826058480267e-17 + fConst51))) - 2.99167222995308e-17));
	fConst53 = (1.31186023952336e-19 * fConst1);
	fConst54 = (9.97523243874022e-14 + (fConst1 * (2.19688509958529e-13 + (fConst1 * (5.13531503747398e-16 + fConst53)))));
	fConst55 = (6.27135520638694e-19 * fConst1);
	fConst56 = (fConst1 * (0 - (3.1690755974009e-30 + fConst55)));
	fConst57 = (5.89507389400371e-20 * fConst1);
	fConst58 = ((fConst1 * (4.37284494845344e-16 - fConst57)) - 9.50490395901342e-13);
	fConst59 = ((fConst1 * (2.96233000867528e-13 + (fConst1 * (fConst49 - 5.54797019446372e-16)))) - 3.53991863558532e-13);
	fConst60 = (fConst1 * ((fConst1 * (6.58826058480267e-17 - fConst51)) - 2.99167222995308e-17));
	fConst61 = ((fConst1 * (2.19688509958529e-13 + (fConst1 * (fConst53 - 5.13531503747398e-16)))) - 9.97523243874022e-14);
	fConst62 = (5.68982662042357e-19 * fConst1);
	fConst63 = ((fConst8 * (1.10959403889274e-15 - fConst62)) - 7.07983727117064e-13);
	fConst64 = (5.79187743718923e-19 * fConst1);
	fConst65 = (fConst8 * (fConst64 - 1.31765211696053e-16));
	fConst66 = (5.24744095809344e-19 * fConst1);
	fConst67 = ((fConst8 * (1.0270630074948e-15 - fConst66)) - 1.99504648774804e-13);
	fConst68 = (5.98334445990616e-17 - (8.68781615578384e-19 * fConst8));
	fConst69 = ((7.87116143714016e-19 * fConst8) - 4.39377019917057e-13);
	fConst70 = ((8.53473993063535e-19 * fConst8) - 5.92466001735056e-13);
	fConst71 = (7.07983727117064e-13 + (fConst8 * (0 - (1.10959403889274e-15 + fConst62))));
	fConst72 = (fConst8 * (1.31765211696053e-16 + fConst64));
	fConst73 = (1.99504648774804e-13 + (fConst8 * (0 - (1.0270630074948e-15 + fConst66))));
	fConst74 = (2.50854208255478e-18 * fConst1);
	fConst75 = (6.3381511948018e-30 + fConst74);
	fConst76 = (2.35802955760148e-19 * fConst1);
	fConst77 = (fConst76 - 8.74568989690687e-16);
	fConst78 = (1.90098079180268e-12 - (3.53704433640223e-19 * fConst8));
	fConst79 = (fConst74 - 6.3381511948018e-30);
	fConst80 = (8.74568989690687e-16 + fConst76);
	fConst81 = (fConst1 * (3.1690755974009e-30 - fConst55));
	fConst82 = ((fConst1 * (0 - (4.37284494845344e-16 + fConst57))) - 9.50490395901342e-13);
	fConst83 = (0.5 * fConst8);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = (f - clip.low) * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, -x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fsliderV0 (*fsliderV0_)
	double 	fSlowV0 = (0.0010000000000000009 * double(fsliderV0));

	double 	fSlow0 = (0.007000000000000006 * (1 - double(fslider0)));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		double fTemp0 = (4.38891564837005e-06 + (fConst1 * (fConst5 + (fConst3 * fRec0[0]))));
		fRec3[0] = ((0.993 * fRec3[1]) + fSlow1);
		double fTemp1 = (1.63070818938153e-07 + (fConst1 * ((fRec3[0] * (fConst16 + (fConst14 * fRec3[0]))) + fConst12)));
		double fTemp2 = (double)input0[i];
		fVec0[0] = fTemp2;
		fRec5[0] = (fConst36 * ((fVec0[0] - fVec0[1]) + (fConst10 * fRec5[1])));
		fRec4[0] = (fRec5[0] - (((((fRec4[1] * (6.52283275752612e-07 + (fConst1 * ((fRec3[0] * (fConst35 + (fConst34 * fRec3[0]))) + fConst33)))) + (fRec4[2] * (9.78424913628919e-07 + (fConst8 * (fConst32 + (fRec3[0] * (fConst31 + (fConst30 * fRec3[0])))))))) + (fRec4[3] * (6.52283275752612e-07 + (fConst1 * ((fRec3[0] * (fConst29 + (fConst27 * fRec3[0]))) + fConst25))))) + (fRec4[4] * (1.63070818938153e-07 + (fConst1 * ((fRec3[0] * (fConst23 + (fConst22 * fRec3[0]))) + fConst21))))) / fTemp1));
		double fTemp3 = symclip((fConst8 * ((((((fRec4[0] * (fConst46 + (fConst45 * fRec3[0]))) + (fConst1 * (fRec4[1] * (fConst44 + (fConst43 * fRec3[0]))))) + (fRec4[2] * (fConst42 + (fConst41 * fRec3[0])))) + (fConst1 * (fRec4[3] * (fConst40 + (fConst38 * fRec3[0]))))) + (fRec4[4] * (fConst20 + (fConst18 * fRec3[0])))) / fTemp1)));
		fVec1[0] = fTemp3;
		fRec2[0] = (fConst36 * ((fVec1[0] - fVec1[1]) + (fConst10 * fRec2[1])));
		fRec1[0] = (fRec2[0] - (((fRec1[1] * (8.7778312967401e-06 + (fConst8 * ((0 - (6.79262596084427e-10 * fRec0[0])) - 5.25634156552156e-10)))) + (fRec1[2] * (4.38891564837005e-06 + (fConst1 * (fConst7 + (fConst6 * fRec0[0])))))) / fTemp0));
		fRec6[0] = ((0.993 * fRec6[1]) + fSlow2);
		double fTemp4 = (9.97523243874022e-14 + (fConst1 * ((fRec6[0] * (fConst54 + (fConst52 * fRec6[0]))) + fConst50)));
		fRec7[0] = (fRec2[0] - (((((fRec7[1] * (3.99009297549609e-13 + (fConst1 * ((fRec6[0] * (fConst73 + (fConst72 * fRec6[0]))) + fConst71)))) + (fRec7[2] * (5.98513946324413e-13 + (fConst8 * (fConst70 + (fRec6[0] * (fConst69 + (fConst68 * fRec6[0])))))))) + (fRec7[3] * (3.99009297549609e-13 + (fConst1 * ((fRec6[0] * (fConst67 + (fConst65 * fRec6[0]))) + fConst63))))) + (fRec7[4] * (9.97523243874022e-14 + (fConst1 * ((fRec6[0] * (fConst61 + (fConst60 * fRec6[0]))) + fConst59))))) / fTemp4));
		double fTemp5 = ((((((fRec7[0] * (fConst82 + (fConst81 * fRec6[0]))) + (fConst1 * (fRec7[1] * (fConst80 + (fConst79 * fRec6[0]))))) + (fRec7[2] * (fConst78 + (fConst8 * (0 - (3.76281312383216e-18 * fRec6[0])))))) + (fConst1 * (fRec7[3] * (fConst77 + (fConst75 * fRec6[0]))))) + (fRec7[4] * (fConst58 + (fConst56 * fRec6[0])))) / fTemp4);
		fVec2[0] = fTemp5;
		output0[i] = (FAUSTFLOAT)(0.5 * ((fConst83 * (((0.75 * (((1.3333333333333333 * fVec2[1]) - (0.3333333333333333 * fVec2[2])) + (0.6666666666666666 * fVec2[0]))) + (0.55 * (((1.3333333333333333 * fVec2[2]) - (0.3333333333333333 * fVec2[3])) + (0.6666666666666666 * fVec2[1])))) + (0.25 * (((1.3333333333333333 * fVec2[3]) - (0.3333333333333333 * fVec2[4])) + (0.6666666666666666 * fVec2[2]))))) + (((fConst48 * fRec1[0]) + (fConst47 * fRec1[2])) / fTemp0)));
		// post processing
		for (int i=4; i>0; i--) fVec2[i] = fVec2[i-1];
		for (int i=4; i>0; i--) fRec7[i] = fRec7[i-1];
		fRec6[1] = fRec6[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fVec1[1] = fVec1[0];
		for (int i=4; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec5[1] = fRec5[0];
		fVec0[1] = fVec0[0];
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
	for (int i=0; i<count; i++) {
		fRecV0[0] = ((0.999 * fRecV0[1]) + fSlowV0);
		output0[i] = (FAUSTFLOAT)((double)output0[i] * fRecV0[0]);
		// post processing
		fRecV0[1] = fRecV0[0];
	}

#undef fsliderV0 
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case ATTACK: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case RESONANCE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fsliderV0_ = (float*)data; // , 0.5, 0.0, 1, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   ATTACK, 
   RESONANCE, 
   TONE, 
   VOLUME,
} PortIndex;
*/

} // end namespace voodoo
