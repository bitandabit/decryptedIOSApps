//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSProgress;

@interface _TtC5Files17DOCItemStatusView : UIView
{
    // Error parsing type: , name: statusAppearance
    // Error parsing type: , name: statusImageView
    // Error parsing type: , name: progressView
    // Error parsing type: , name: observedProgress
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateAppearance:(id)arg1;
- (void)updateProgressVisibility;
- (void)tintColorDidChange;
@property(nonatomic, retain) NSProgress *observedProgress; // @synthesize observedProgress;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(nonatomic) _Bool canShowStopButton;

@end
