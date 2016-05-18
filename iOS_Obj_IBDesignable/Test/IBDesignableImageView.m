//
//  IBDesignableImageView.m
//  iOS_Obj_IBDesignable
//
//  Created by Mr nie on 16/5/18.
//  Copyright © 2016年 程序猿:NiePlus   博客地址:http://nieplus.blog.com. All rights reserved.
//

#import "IBDesignableImageView.h"

@implementation IBDesignableImageView

- (void)setCornerRadius:(CGFloat)cornerRadius {
    _cornerRadius = cornerRadius;
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = cornerRadius;
}

@end
