//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPlayerTrack, UIView;

@protocol SPTNowPlayingShowsFormatDecorationContentProvider <NSObject>
- (void)updateWithTrack:(SPTPlayerTrack *)arg1;
- (_Bool)shouldRenderContent;
- (UIView *)provideContent;
@end

