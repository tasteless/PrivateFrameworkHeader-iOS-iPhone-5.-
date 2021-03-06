/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class Protocol, NSString, NSRecursiveLock, NSDate;

@interface IMRemoteObjectInternal : NSObject  {
    NSRecursiveLock *_lock;
    unsigned int _port;
    struct dispatch_source_s { } *_source;
    struct dispatch_queue_s { } *_queue;
    long _deathPostPredicate;
    double _timeout;
    Protocol *_protocol;
    NSString *_portName;
    NSDate *_firstDateClientWasInformedOfDisconnected;
    BOOL _willBeTerminated;
}



@end
