/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKUITextAndHeaderItem, NSArray, NSDate, NSDictionary;

@interface EKUIEventNotificationRepresentation : NSObject {
    BOOL _allDay;
    NSDate *_date;
    NSDictionary *_organizerContactDictionary;
    EKUITextAndHeaderItem *_subtitleItem;
    NSArray *_supplementaryItems;
    EKUITextAndHeaderItem *_titleItem;
    unsigned int _type;
    NSDictionary *_userActivityUserInfo;
}

@property(getter=isAllDay) BOOL allDay;
@property(retain) NSDate * date;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) NSDictionary * organizerContactDictionary;
@property(retain) EKUITextAndHeaderItem * subtitleItem;
@property(retain) NSArray * supplementaryItems;
@property(retain) EKUITextAndHeaderItem * titleItem;
@property unsigned int type;
@property(retain) NSDictionary * userActivityUserInfo;

+ (BOOL)_invitationNotificationHasResourceChanges:(id)arg1 changesString:(id*)arg2;
+ (id)defaultEventNotificationRepresentationWithTitle:(id)arg1 message:(id)arg2;
+ (id)invitationNotificationRepresentationWithNotification:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4;
+ (id)resourceChangeNotificationWithNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
+ (id)responseNotificationWithTitle:(id)arg1 message:(id)arg2;
+ (id)upcomingEventNotificationRepresentationWithEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationsOfSupplementaryItems;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAllDay;
- (id)organizerContactDictionary;
- (void)setAllDay:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)setOrganizerForContactDictionary:(id)arg1;
- (void)setSubtitleItem:(id)arg1;
- (void)setSupplementaryItems:(id)arg1;
- (void)setTitleItem:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUserActivityUserInfo:(id)arg1;
- (id)subtitleItem;
- (id)supplementaryItems;
- (id)titleItem;
- (unsigned int)type;
- (id)userActivityUserInfo;

@end
