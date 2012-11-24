#ifndef EVENTDISPATCHER_LIBEVENT_CONFIG_P_H
#define EVENTDISPATCHER_LIBEVENT_CONFIG_P_H

#include <QtCore/QSharedData>

struct event_config;

class Q_DECL_HIDDEN EventDispatcherLibEventConfigPrivate : public QSharedData {
public:
	EventDispatcherLibEventConfigPrivate(void);
	~EventDispatcherLibEventConfigPrivate(void);

	bool avoidMethod(const char* method);
	bool requireFeatures(int features);
	bool setConfiguration(int config);
private:
	event_config* m_cfg;

	friend class EventDispatcherLibEventPrivate;
};

#endif // EVENTDISPATCHER_LIBEVENT_CONFIG_P_H
