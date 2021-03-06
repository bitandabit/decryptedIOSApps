//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SCPreviewFilterDataProviderContextData;

@interface SCUnlockablesContextBasedSelector : NSObject
{
    NSString *_initializedTriggerContext;
    NSDictionary *_clientUnlockablesContextDictionary;
    _Bool _friendsWithBitMoji;
    SCPreviewFilterDataProviderContextData *_filterContextData;
}

+ (id)visualContextFilterIds:(id)arg1;
+ (id)emojiFriendContextMap;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData; // @synthesize filterContextData=_filterContextData;
- (void).cxx_destruct;
- (id)enforceFriendFiltersCount:(id)arg1;
- (id)filterGeofilters:(id)arg1;
- (id)_visualContext;
- (id)_actionmojiContext;
- (id)_mediaTypeContext;
- (id)_cameraContext;
- (id)_friendContext;
- (id)_triggerContext;
- (id)initWithFilterContextData:(id)arg1;

@end

