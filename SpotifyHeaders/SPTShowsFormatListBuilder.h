//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTShowsFormatListBuilder : NSObject
{
    _Bool _videoFiltered;
}

@property(readonly, nonatomic, getter=isVideoFiltered) _Bool videoFiltered; // @synthesize videoFiltered=_videoFiltered;
- (_Bool)isVideoItem:(id)arg1;
- (id)configureAudioEntityListItemWithFormatListItem:(id)arg1;
- (id)configureVideoEntityListItemWithFormatListItem:(id)arg1;
- (id)entityListItemForFormatListItem:(id)arg1;
- (id)entityListItemsFromFormatListItems:(id)arg1;
- (id)entityListForFormatListModel:(id)arg1;
- (id)initWithVideoFiltered:(_Bool)arg1;

@end

