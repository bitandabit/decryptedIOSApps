//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SCCameraFooterView : UIView
{
    NSArray *_leftItems;
    NSArray *_centerItems;
    NSArray *_rightItems;
}

@property(copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
@property(copy, nonatomic) NSArray *centerItems; // @synthesize centerItems=_centerItems;
@property(copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end

