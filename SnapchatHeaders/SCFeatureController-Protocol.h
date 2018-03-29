//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, UIView;
@protocol SCFeature, SCFeatureControl;

@protocol SCFeatureController <NSObject>
@property(nonatomic) __weak id <SCFeature> feature;
- (void)controlDidChange:(id <SCFeatureControl>)arg1;
- (void)forwardGesture:(UIGestureRecognizer *)arg1;
- (void)configureWithView:(UIView *)arg1;
@end

