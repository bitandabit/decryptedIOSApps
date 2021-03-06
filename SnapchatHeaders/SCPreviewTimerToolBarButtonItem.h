//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarButtonItem.h"

@protocol SCPreviewTimerToolBarButtonItemDelegate;

@interface SCPreviewTimerToolBarButtonItem : SCPreviewToolBarButtonItem
{
    _Bool _isImageSnap;
    _Bool _reverse;
    id <SCPreviewTimerToolBarButtonItemDelegate> _delegate;
    unsigned long long _time;
    long long _speed;
}

@property(readonly, nonatomic, getter=isReverse) _Bool reverse; // @synthesize reverse=_reverse;
@property(readonly, nonatomic) long long speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) _Bool isImageSnap; // @synthesize isImageSnap=_isImageSnap;
@property(nonatomic) __weak id <SCPreviewTimerToolBarButtonItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (id)initWithBarButtonItemType:(long long)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

