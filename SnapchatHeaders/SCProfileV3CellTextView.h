//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSString, UIColor, UILabel;

@interface SCProfileV3CellTextView : UIStackView
{
    UILabel *_header;
    UILabel *_subText;
    UIColor *_colorOverride;
}

@property(retain, nonatomic) UIColor *colorOverride; // @synthesize colorOverride=_colorOverride;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subText;
@property(copy, nonatomic) NSString *headerText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

