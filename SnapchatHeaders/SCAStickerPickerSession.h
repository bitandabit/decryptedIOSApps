//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAStickerPickerSession : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *stickerSubsectionViewCount;
    NSNumber *stickerSectionsViewCount;
    NSNumber *viewTimeSec;
    NSNumber *withStickerPick;
    NSNumber *withSearch;
    NSNumber *searchSequenceId;
    NSNumber *withBitmojiTabVisible;
    NSNumber *contextualStickerLoadTime;
    long long stickerSourceTab;
    long long stickerPickerType;
    NSString *stickerSectionsViewed;
    NSString *stickerSectionsEntryEvents;
    NSString *snapSessionId;
    NSString *stickerSessionId;
    NSString *searchTerm;
    NSDate *sessionStartTime;
    NSDate *sessionEndTime;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getSessionEndTime;
- (void)setSessionEndTime:(id)arg1;
- (id)getSessionStartTime;
- (void)setSessionStartTime:(id)arg1;
- (id)getSearchTerm;
- (void)setSearchTerm:(id)arg1;
- (id)getStickerSessionId;
- (void)setStickerSessionId:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getStickerSectionsEntryEvents;
- (void)setStickerSectionsEntryEvents:(id)arg1;
- (id)getStickerSectionsViewed;
- (void)setStickerSectionsViewed:(id)arg1;
- (long long)getStickerPickerType;
- (void)setStickerPickerType:(long long)arg1;
- (long long)getStickerSourceTab;
- (void)setStickerSourceTab:(long long)arg1;
- (long long)getContextualStickerLoadTime;
- (void)setContextualStickerLoadTime:(long long)arg1;
- (_Bool)getWithBitmojiTabVisible;
- (void)setWithBitmojiTabVisible:(_Bool)arg1;
- (long long)getSearchSequenceId;
- (void)setSearchSequenceId:(long long)arg1;
- (_Bool)getWithSearch;
- (void)setWithSearch:(_Bool)arg1;
- (_Bool)getWithStickerPick;
- (void)setWithStickerPick:(_Bool)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (long long)getStickerSectionsViewCount;
- (void)setStickerSectionsViewCount:(long long)arg1;
- (long long)getStickerSubsectionViewCount;
- (void)setStickerSubsectionViewCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

