/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, _UIViewServiceXPCListener;

@interface _UIViewServiceSessionManager : NSObject {
    int _connectionNotificationToken;
    NSMutableArray *_incomingConnections;
    _UIViewServiceXPCListener *_listener;
    int _lock;
    NSMutableArray *_sessions;
}

+ (BOOL)hasActiveSessions;
+ (void)startViewServiceSessionManager;

- (id)_init;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListener;
- (void)dealloc;
- (BOOL)hasActiveSessions;
- (id)init;

@end
