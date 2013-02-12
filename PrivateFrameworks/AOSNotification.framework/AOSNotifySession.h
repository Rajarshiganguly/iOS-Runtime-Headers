/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class <AOSNotifySessionDelegate>;

@interface AOSNotifySession : NSObject {
    <AOSNotifySessionDelegate> *_delegate;
    unsigned int _serverPort;
}

@property <AOSNotifySessionDelegate> * delegate;

+ (id)copySerialNum:(id*)arg1;
+ (id)copySetupToken:(id*)arg1;
+ (id)copyStoreAccount;

- (void)_stopDeliveringNotifications;
- (void)_topicNotified:(id)arg1;
- (void)_vetFinished:(id)arg1;
- (void)_vetResultReceived:(id)arg1;
- (id)addAccount:(id)arg1;
- (id)cancelEmailVet;
- (void)dealloc;
- (id)delegate;
- (id)getSetupToken:(id*)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)removeAccount:(id)arg1;
- (id)retrieveAllAccounts:(id*)arg1;
- (id)retrieveCurrentAccountForService:(id)arg1 returningAccount:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (id)vetEmailAccount:(id)arg1;

@end