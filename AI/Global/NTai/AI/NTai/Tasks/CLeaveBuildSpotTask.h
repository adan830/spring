class CLeaveBuildSpotTask : public IModule {
public:
	//CLeaveBuildSpotTask(Global* GL);
	CLeaveBuildSpotTask(Global* GL, int unit, const UnitDef* ud);
	void RecieveMessage(CMessage &message);
	bool Init();
	void End();
protected:
	string mymessage;
	int unit;
	const UnitDef* ud;
};
