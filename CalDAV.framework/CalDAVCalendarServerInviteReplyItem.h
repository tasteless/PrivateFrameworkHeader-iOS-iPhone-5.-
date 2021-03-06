/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItem;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem  {
    CoreDAVItem *_href;
    CoreDAVItem *_inviteStatus;
    CoreDAVItem *_hostURL;
    CoreDAVItem *_inReplyTo;
    CoreDAVItem *_summary;
}

@property(retain,readonly) CoreDAVItem * summary;
@property(retain,readonly) CoreDAVItem * inReplyTo;
@property(retain,readonly) CoreDAVItem * hostURL;
@property(retain,readonly) CoreDAVItem * inviteStatus;
@property(retain,readonly) CoreDAVItem * href;


- (id)inviteStatus;
- (id)summary;
- (id)href;
- (id)inReplyTo;
- (id)hostURL;

@end
