
class IBehaviour : public IModule{
public:
	IBehaviour(){}
	IBehaviour(Global* GL, int uid){}
	virtual ~IBehaviour(){}
	virtual bool Init(){ return false;}
	virtual void RecieveMessage(CMessage &message){}
	inline bool IsActive(){
		return active;
	}
	inline bool SetActive(bool active){
		this->active = active;
	}
protected:
	//virtual void FinishBehaviour();
	boost::shared_ptr<IModule> unit;
	bool active;
};
